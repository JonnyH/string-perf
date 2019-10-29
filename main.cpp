#define ANKERL_NANOBENCH_IMPLEMENT

#include "dependencies/nanobench/src/include/nanobench.h"

#include "bench_examples.h"

int main(int argc, char **argv) {
  std::string s_snprintf, s_sstream, s_tinyformat, s_fmt;
  std::string prefix = "This is the prefix";
  Vec3<float> vec = {1.0f, 2.0f, 3.0f};
  ankerl::nanobench::Config()
      .run("snprintf", [&] { s_snprintf = bench_snprintf(prefix, vec); })
      .doNotOptimizeAway(s_snprintf);
  
  ankerl::nanobench::Config()
	  .run("sstream", [&] { s_sstream = bench_sstream(prefix, vec); })
	  .doNotOptimizeAway(s_sstream); 
  
  ankerl::nanobench::Config()
	  .run("tinyformat", [&] { s_tinyformat = bench_tinyformat(prefix, vec); })
	  .doNotOptimizeAway(s_tinyformat);
  
  ankerl::nanobench::Config()
	  .run("fmt", [&] { s_fmt = bench_fmt(prefix, vec); })
	  .doNotOptimizeAway(s_fmt);

  std::cout << "snprintf:\n" << s_snprintf << "\n"
		  << "sstream: \n" << s_sstream << "\n"
		  << "tinyformat: \n" << s_tinyformat << "\n"
		  << "fmt: \n" << s_fmt << "\n";

  return 0;
}
