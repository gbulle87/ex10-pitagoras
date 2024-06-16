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





};

/* ---------------------------------------------------------------------- */
int main(void)
{
    return 0;
}

/* add more functions here */

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20220718.172615      */


