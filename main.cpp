#define ANKERL_NANOBENCH_IMPLEMENT

#include "dependencies/nanobench/src/include/nanobench.h"

#include "bench_examples.h"

int main(int argc, char **argv) {
  std::string s_snprintf, s_sstream, s_tinyformat, s_fmt, s_sstream_vec,
      s_tinyformat_vec, s_fmt_vec;
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

  ankerl::nanobench::Config()
      .run("sstream_vec",
           [&] { s_sstream_vec = bench_sstream_vec(prefix, vec); })
      .doNotOptimizeAway(s_sstream_vec);

  ankerl::nanobench::Config()
      .run("tinyformat_vec",
           [&] { s_tinyformat_vec = bench_tinyformat_vec(prefix, vec); })
      .doNotOptimizeAway(s_tinyformat_vec);

  ankerl::nanobench::Config()
      .run("fmt_vec", [&] { s_fmt_vec = bench_fmt_vec(prefix, vec); })
      .doNotOptimizeAway(s_fmt_vec);

  std::cout << "snprintf:\n"
            << s_snprintf << "\n"
            << "sstream: \n"
            << s_sstream << "\n"
            << "tinyformat: \n"
            << s_tinyformat << "\n"
            << "fmt: \n"
            << s_fmt << "\n"
            << "sstream_vec: \n"
            << s_sstream_vec << "\n"
            << "tinyformat_vec: \n"
            << s_tinyformat_vec << "\n"
            << "fmt_vec: \n"
            << s_fmt_vec << "\n";

  return 0;
}
