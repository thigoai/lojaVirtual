Loja Virtual

Descrição:
O projeto simula uma loja virtual

Para compilar: 
- mkdir build
- cd build
- cmake ..
- make

Rodar os testes:
- ctest

Executar:
- ./src/main_exec

Obter os logs:
- cat loja_virtual.log

Depuração usando GDB:
- gdb ./src/main_exec #para abrir menu
- (gdb) break adicionaProduto #adciona breakpoint na função
- (gdb) break calcularTotal #adciona breakpoint na função
- (gdb) run #iniciar depuração
- (gdb) print variavel #exibir valores da variavel
- (gdb) continue #seguir para proximo breakpoint
- (gdb) quit #encerrar depuração

