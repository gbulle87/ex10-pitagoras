/***************************************************************************
 *   ex10.cpp                                 Version 20240616.115456      *
 *                                                                         *
 *   Calculadora polonesa em C++ (Pilhas)                                  *
 *   Copyright (C) 2024         by Gabriel Bulle De Barros                 *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Gabriel Bulle De Barros                                               *
 *   Email: gbb1@poli.br                                                   *
 *   Webpage: http://beco.poli.br/gbb1@poli.br                             *
 *   Phone: 81991396798                                                    *
 ***************************************************************************/

/*
 * Instrucoes para compilar:
 *   $ make ex10.out
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <iostream> /* (Input/output library) Several standard stream objects */
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <stack>

/* ---------------------------------------------------------------------- */
/* classes : */
// Implementação da classe Stack

template <typename T>

class Stack
{
    private:
        std::vector<T> elements;

    public:
        void push(const T &element)
        {
            elements.push_back(element);
        }

        void pop()
        {
            if(elements.empty())
                throw std::out_of_range("Stack<>::pop(): pilha vazia");
            elements.pop_back();
        }

          T top() const
        {
            if(elements.empty())
                throw std::out_of_range("Stack<>::top(): pilha vazia");
            return elements.back();
        }

        bool isEmpty() const
        {
            return elements.empty();
        }

        size_t size() const
        {
            return elements.size();
        }

};
// Implementação da calculadora polonesa
class PolishCalculator
{
    public:
        double evaluate(const std::string &expression)
        {
            std::istringstream tokens(expression);
            std::string token;
            Stack<double> stack;


            while(tokens >> token)
            {
                std::cout << " Token atual: " << token << std::endl;

                if(isOperator(token))
                {
                    if(stack.size() < 2)
                    {
                        std::cerr << " Erro: Expressão inválida - faltam operandos" << std::endl;
                        throw std::runtime_error("Expressão inválida: faltam operandos");
                    }
                    double b = stack.top();
                    stack.pop();
                    double a = stack.top();
                    stack.pop();
                    std::cout << " Aplicando operador " << token << " a " << a << " e " << b << std::endl;
                    double result = applyOperator(token, a, b);
                    std::cout << " Resultado da operação: " << result << std::endl;
                    stack.push(result);

                }
                else
                {
                    double number = std::stod(token);
                    std::cout << " Empilhando número " << number << " na pilha" << std::endl;
                    stack.push(number);
                }
            }

            if(stack.size() != 1)
                throw std::runtime_error("Expressão inválida");

            return stack.top();
        }
    private:
        bool isOperator(const std::string &token) const
        {
            return token == "+" || token == "-" || token == "*" || token == "/";
        }

        double applyOperator(const std::string &op, double a, double b) const
        {
            if(op == "+") return a + b;
            if(op == "-") return a - b;
            if(op == "*") return a * b;
            if(op == "/")
            {
                if(b == 0) throw std::runtime_error("Divisão por zero");
                return a / b;
            }
            throw std::runtime_error("Operador inválido");
        }
};
/* ---------------------------------------------------------------------- */
int main(void)
{
    PolishCalculator calculator;
    std::string expression;

    std::cout << "Digite uma expressão em notação polonesa reversa: ";
    std::getline(std::cin, expression); // Leitura da expressão do usuário

    try
    {
        double result = calculator.evaluate(expression);
        std::cout << "Resultado: " << result << std::endl;
    }
    catch(const std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

/* add more functions here */

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */


