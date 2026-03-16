# 🥚 Price Comparison – Easter Eggs (C)

![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-linked_list-yellow)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

# Sobre o projeto

Este projeto implementa um sistema simples para **comparação de preços de ovos de Páscoa**, utilizando uma **lista encadeada em C** como estrutura de dados principal.

O programa permite registrar diferentes produtos informando:

* identificador
* preço

Com base nos valores cadastrados, o sistema analisa os preços e informa **se vale a pena ou não realizar a compra**.

O objetivo do projeto é praticar **estruturas de dados, manipulação de ponteiros e organização modular de código em C**.

---

# Tecnologias utilizadas

* **C (padrão C11)**
* **GNU Make** para automação da compilação
* Estrutura de dados: **lista encadeada**

---

# Conceitos aplicados

Este projeto utiliza diversos conceitos fundamentais da linguagem C:

* Alocação dinâmica de memória (`malloc`, `free`)
* Manipulação de ponteiros
* Estrutura de dados: **lista encadeada**
* Encapsulamento utilizando arquivos `.h`
* Modularização do código
* Separação entre **interface e implementação**
* Organização do projeto em múltiplos diretórios
* Automação da compilação com **Makefile**

---

# Funcionalidades

## Adicionar ovos de Páscoa

Permite inserir novos itens na lista informando:

* identificador
* preço

---

## Atualizar dados

Permite atualizar os dados de um item já cadastrado:

* atualizar apenas o identificador
* atualizar apenas o preço
* atualizar ambos

---

## Remover item

Remove um ovo de Páscoa da lista através do **identificador**.

---

## Exibir lista

Mostra todos os itens cadastrados contendo:

* identificador
* preço

---

## Verificar resultado

Analisa os preços cadastrados e informa se **vale a pena ou não realizar a compra**, com base nos valores presentes na lista.

---

# Representação da estrutura de dados

A lista encadeada pode ser representada da seguinte forma:

```
HEAD
 ↓
[ID:1 | 45.90] → [ID:2 | 39.50] → [ID:3 | 52.00] → NULL
```

Cada nó da lista possui a seguinte estrutura:

```c
struct _egg{
    int _identifier;
    float _price;
    struct _egg *_next;
};
```

---

# Estrutura do projeto

```
Price-Comparison-C/
│
├── app/       # Arquivos principais da aplicação (main)
├── bin/       # Executáveis gerados após a compilação
├── include/   # Arquivos de cabeçalho (.h)
├── obj/       # Arquivos objeto (.o)
├── src/       # Código-fonte da aplicação (.c)
│
├── Makefile   # Regras de compilação
├── README.md  # Documentação do projeto
└── LICENSE    # Licença do projeto
```

---

# Exemplo de execução

```
+--------------------------------------------------------------------------+
+-------------------------------- BEM-VINDO -------------------------------+
+--------------------------------------------------------------------------+
+---------------------------- PÁGINA PRINCIPAL ----------------------------+
+--------------------------------------------------------------------------+
+ 1 - ADICIONAR OVO DA PÁSCOA A LISTA -------------------------------------+
+--------------------------------------------------------------------------+
+ 2 - ATUALIZAR DADOS DE UM OVO DA PÁSCOA ---------------------------------+
+--------------------------------------------------------------------------+
+ 3 - REMOVER UM OVO DA PÁSCOA DA LISTA -----------------------------------+
+--------------------------------------------------------------------------+
+ 4 - IMPRIMIR A LISTA  ---------------------------------------------------+
+--------------------------------------------------------------------------+
+ 5 - VERIFICAR RESULTADO (COMPRAR OU NÃO) --------------------------------+
+--------------------------------------------------------------------------+
+ 0 - SAIR ----------------------------------------------------------------+
+--------------------------------------------------------------------------+
+ INFORME A OPÇÃO DESEJADA: 
```

---

# Requisitos

Para compilar o projeto é necessário:

* **GCC ou Clang**
* **GNU Make**
* Sistema **Linux ou macOS**

---

# Instalação

Clone o repositório:

```bash
git clone git@github.com:natamleao/Price-Comparison-C.git
cd Price-Comparison-C
```

---

# Compilação

Compile o projeto com:

```bash
make
```

---

# Execução

Execute o programa com:

```bash
make run
```

---

# Limpeza do projeto

Remover arquivos compilados:

```bash
make clean
make cleanapp
```

---

# Licença

Este projeto está licenciado sob a **MIT License**.

---

# Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---