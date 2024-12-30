# Get Next Line (GNL)

**Get Next Line (GNL)** é um projeto da **42 Rio** que implementa a função `get_next_line`, responsável por ler uma linha de um arquivo ou da entrada padrão de forma eficiente e com controle de memória.

O projeto tem como objetivo aprimorar a manipulação de arquivos e buffers em C, além de aprofundar o conhecimento sobre leitura de arquivos e alocação dinâmica de memória.

### **Parte Bônus:**
Além da funcionalidade principal, a versão bônus do projeto foi implementada para lidar com múltiplos arquivos simultaneamente. Isso significa que a função `get_next_line` pode agora ler de vários arquivos de forma independente, mantendo o controle do estado de cada um.

## Funcionalidades Implementadas

- **Leitura de linhas**: A função lê uma linha por vez do arquivo ou da entrada padrão, incluindo o caractere de nova linha (`\n`).
- **Suporte a múltiplos arquivos** (Parte Bônus): A versão bônus permite a leitura de múltiplos arquivos ao mesmo tempo, com cada arquivo sendo tratado independentemente.
- **Leitura eficiente**: A função é projetada para ser eficiente em termos de memória, carregando apenas o necessário e evitando a leitura de bytes desnecessários.
- **Controle de memória**: A função gerencia a alocação de memória dinamicamente e deve ser usada com cuidado, liberando as variáveis corretamente.

## Como Usar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/rubens-maldonado/GNL.git

2. **Inclua no seu código:** Adicione o arquivo de cabeçalho `get_next_line.h` e o arquivo de implementação `get_next_line.c` ao seu projeto e use a `função get_next_line` da seguinte forma:
    ```c

    #include "get_next_line.h"

    int main() {
      char *line;
      int fd = open("arquivo.txt", O_RDONLY);

      if (fd == -1)
          return -1;

      while (get_next_line(fd, &line) > 0) {
          printf("Linha: %s\n", line);
          free(line); // Não se esqueça de liberar a memória após o uso
      }

      close(fd);
      return 0;
    }


3. **Compile o código manualmente:** você pode compilar os arquivos utilizando o compilador gcc (ou qualquer outro de sua preferência). No terminal, use o seguinte comando:
    ```bash
    gcc -Wall -Werror -Wextra -o get_next_line get_next_line.c
