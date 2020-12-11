#include "diceparser.h"
#include <benchmark/benchmark.h>
#include <iostream>
#include <sstream>

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state)
    std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

static void form(benchmark::State& state){
    std::string f = "2+2";
    for (auto _ : state){
        DP::RollFormula roller;
        std::stringstream sstr(f);
        try{
            sstr >> roller;
        } catch(std::runtime_error& e) {
            std::cout << roller;
            std::cerr<<e.what()<<'\n';
        }
        std::cout << roller;
        try{
            std::cout << roller.evaluate()<<'\n';
        } catch(std::runtime_error& e){
            std::cerr<<e.what()<<'\n';
        }
    }
}
BENCHMARK(form);

BENCHMARK_MAIN();


