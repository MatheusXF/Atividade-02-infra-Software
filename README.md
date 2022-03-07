
Script que cria 2 processos, 1 pai e 1 filho. E na sequência o filho lê o que foi escrito pelo pai.

Foi declarado o file descriptor antes do fork, para tanto o filho quanto o pai quanto o filho terem acesso a ele.

no processo pai foi utilizado write para escrever um número no filedescriptor[1]

e após isso foi acessado o processo filho e lido com o read filedescriptor[0] e em seguida o numero lido é printado na tela.
