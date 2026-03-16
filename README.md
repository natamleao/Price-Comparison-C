# Comparação de preços de ovos de Páscoa

![C](https://img.shields.io/badge/C-C11-blue)
![Status](https://img.shields.io/badge/Project-Personal-orange)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

## Sobre o projeto

> [!NOTE]
> Este projeto apresenta a implementação de uma **lista encadeada em C**, com o objetivo de auxiliar na comparação de preços entre diferentes ovos de Páscoa cadastrados na lista, permitindo ao usuário decidir se vale a pena realizar a compra.

---

# Tecnologias utilizadas

* **C (padrão C11)**
* **GNU Make** para automação da compilação
* Estrutura de dados: **lista encadeada**

---

# Conceitos aplicados

Este projeto utiliza diversos conceitos fundamentais de programação em C:

* Alocação dinâmica de memória (`malloc`, `free`)
* Manipulação de ponteiros
* Estrutura de dados: **lista encadeada**
* Encapsulamento utilizando arquivos `.h`
* Modularização do código
* Separação entre **interface e implementação**
* Automação da compilação com `Makefile`

---

# Funcionalidades

## 1. Adicionar ovo de Páscoa à lista

O usuário pode adicionar itens à lista informando:

* identificador
* preço

---

## 2. Atualizar os dados de um ovo de Páscoa

O usuário pode atualizar:

* apenas o identificador
* apenas o preço
* identificador e preço simultaneamente

---

## 3. Remover um ovo de Páscoa da lista

O usuário pode remover um item da lista informando seu **identificador**.

---

## 4. Mostrar os ovos de Páscoa cadastrados

O sistema exibe todos os itens presentes na lista:

* identificador
* preço

---

## 5. Verificar o resultado

O sistema analisa os ovos de Páscoa cadastrados e informa se **vale a pena ou não realizar a compra**, com base nos preços informados.

---

# Representação da lista encadeada

A estrutura de dados utilizada pode ser representada da seguinte forma:

```
HEAD
 ↓
[ID:1 | 45.90] → [ID:2 | 39.50] → [ID:3 | 52.00] → NULL
```

Cada nó da lista contém:

```
struct _egg{
    int _identifier;
    float _price;
    _egg *_next;
}
```

---

# Estrutura do projeto

```
Price-Variation-C/
│
├── app/       # arquivos principais da aplicação (main e interface)
├── bin/       # executáveis gerados após a compilação
├── include/   # arquivos de cabeçalho (.h)
├── obj/       # arquivos objeto (.o)
├── src/       # código-fonte da aplicação (.c)
│
├── Makefile   # regras de compilação
└── README.md  # documentação do projeto
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
+ INFORME A OPÇÃO DESEJADA: 1
+--------------------------------------------------------------------------+
+---------------------------- ADICIONAR ITENS -----------------------------+
+--------------------------------------------------------------------------+
+ INFORME A QUANTIDADE DE OVOS: 2
+--------------------------------------------------------------------------+
+ INFORME O IDENTIFICADOR E O PREÇO DO 1º OVO: 1 45.90
+--------------------------------------------------------------------------+
+ INFORME O IDENTIFICADOR E O PREÇO DO 1º OVO: 2 39.50
```

---

# Instalação

Clone o repositório:

```bash
git clone git@github.com:natamleao/Price-Variation-C.git
cd Price-Variation-C
```

---

# Compilação e execução

Compile o projeto:

```bash
make
```

Execute o programa:

```bash
make run
```

Remova os arquivos compilados:

```bash
make clean
```

---

# Autor

**Natam Leão Ferreira**

Data de conclusão: **15/03/2026**

---
