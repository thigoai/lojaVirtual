# Loja Virtual

Este projeto simula uma loja virtual. Para mais detalhes, consulte o arquivo [Relatorio_bp.pdf](Relatorio_bp.pdf).

## Como compilar

- mkdir build
- cd build
- cmake ..
- make

## Rodar os testes:
- ctest >> ../tests/resultado.txt

## Executar:
- ./src/main_exec

## Obter os logs:
- cat loja_virtual.log

## Depuração usando GDB:
- gdb ./src/main_exec #para abrir menu
- (gdb) break adicionaProduto #adciona breakpoint na função
- (gdb) break calcularTotal #adciona breakpoint na função
- (gdb) run #iniciar depuração
- (gdb) print variavel #exibir valores da variavel
- (gdb) continue #seguir para proximo breakpoint
- (gdb) quit #encerrar depuração

## Video: 
https://www.loom.com/share/b461e8a93cdb42cf91c5a7439b136ade?sid=13bc971f-619f-4cbd-8a8d-9d2263677079

