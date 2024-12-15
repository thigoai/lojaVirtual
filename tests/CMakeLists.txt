
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.tar.gz
)

FetchContent_MakeAvailable(googletest)

set(TEST_FILES
    test_produto.cpp
    test_pedido.cpp
    test_integracao.cpp
)

add_executable(run_tests ${TEST_FILES})

target_link_libraries(run_tests
    loja_virtual    
    spdlog::spdlog  
    gtest            
    gtest_main       
)


target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/src)

include(GoogleTest)
gtest_discover_tests(run_tests)
