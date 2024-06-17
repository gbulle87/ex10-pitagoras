# Calculadora Polonesa Reversa em C++

Este projeto é uma implementação de uma calculadora que utiliza a notação polonesa reversa (RPN) em C++. A calculadora emprega a estrutura de dados pilha para realizar as operações aritméticas.

## Índice

1. [Funcionalidades](#funcionalidades)
2. [Requisitos](#requisitos)
3. [Como usar](#como-usar)
4. [Exemplo de uso](#exemplo-de-uso)
5. [Estrutura do Projeto](#estrutura-do-projeto)
6. [Contribuição](#contribuição)
7. [Licença](#licença)
8. [Contato](#contato)

## Funcionalidades <a name="funcionalidades"></a>

- **Operações básicas**: Adição, subtração, multiplicação e divisão.
- **Entrada em RPN**: Os operandos e operadores são fornecidos em notação polonesa reversa.
- **Validação de entrada**: Verifica se a entrada é válida e se há operandos suficientes para realizar as operações.
- **Histórico de operações**: Mantém um registro das operações realizadas.

## Requisitos <a name="requisitos"></a>

- Compilador C++ compatível com C++11 ou superior.

## Como usar <a name="como-usar"></a>

1. Clone o repositório:
    ```bash
    git clone https://github.com/gbulle87/ex10-pitagoras.git
    cd ex10-pitagoras
    ```

2. Compile o código:
    ```bash
    make ex10.out
    ```

3. Execute o programa:
    ```bash
    ./ex10.out
    ```

4. Insira a expressão em notação polonesa reversa:
    ```
    5 1 2 + 4 * + 3 -
    ```

## Exemplo de uso <a name="exemplo-de-uso"></a>

Para a entrada `5 1 2 + 4 * + 3 -`, a calculadora processará os seguintes passos:

1. `5` é empilhado.
2. `1` é empilhado.
3. `2` é empilhado.
4. `+` soma os dois últimos elementos da pilha: `1 + 2 = 3`.
5. `4` é empilhado.
6. `*` multiplica os dois últimos elementos da pilha: `3 * 4 = 12`.
7. `+` soma os dois últimos elementos da pilha: `5 + 12 = 17`.
8. `3` é empilhado.
9. `-` subtrai os dois últimos elementos da pilha: `17 - 3 = 14`.

Resultado final: `14`.

## Estrutura do Projeto <a name="estrutura-do-projeto"></a>

- `ex10.cpp`: Arquivo principal contendo a lógica da calculadora.

## Contribuição <a name="contribuição"></a>

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e pull requests.

1. Faça um fork do projeto.
2. Crie uma branch para sua feature:
    ```bash
    git checkout -b minha-nova-feature
    ```
3. Commit suas mudanças:
    ```bash
    git commit -m 'Adiciona minha nova feature'
    ```
4. Envie para o repositório remoto:
    ```bash
    git push origin minha-nova-feature
    ```
5. Abra um pull request.

## Licença <a name="licença"></a>

Este projeto está licenciado sob a MIT License - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## Contato <a name="contato"></a>

Para mais informações, entre em contato através do email: gbb1@poli.br e abm4@poli.br.

---

Esperamos que esta calculadora polonesa reversa seja útil para seus estudos e projetos. Aproveite!
