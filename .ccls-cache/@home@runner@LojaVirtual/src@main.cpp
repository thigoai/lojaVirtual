#include "../include/Catalogo.h"
#include "../include/Pedido.h"
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main() {
  try {
    auto file_logger =
        spdlog::basic_logger_mt("file_logger", "loja_virtual.log");
    spdlog::set_default_logger(file_logger);

    spdlog::info("Iniciando o sistema Loja Virtual...");

    Catalogo catalogo;
    Produto p1(1, "Notebook", 3500.0);
    Produto p2(2, "Mouse", 50.0);

    catalogo.adicionaProduto(p1);
    catalogo.adicionaProduto(p2);

    Pedido pedido("Cliente A");
    pedido.adicionaProduto(p1);
    pedido.adicionaProduto(p2);

    float total = pedido.calcularTotal();
    spdlog::info("Pedido concluído. Total: R${:.2f}", total);
  } catch (const std::exception &e) {
    spdlog::error("Erro no sistema: {}", e.what());
  }

  return 0;
}
