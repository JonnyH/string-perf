#include <string>

#include "dependencies/glm/glm/vec3.hpp"

template <typename T> using Vec3 = glm::vec<3, T, glm::highp>;

std::string bench_snprintf(const std::string &prefix, const Vec3<float> &vec);
std::string bench_sstream(const std::string &prefix, const Vec3<float> &vec);
std::string bench_tinyformat(const std::string &prefix, const Vec3<float> &vec);
std::string bench_fmt(const std::string &prefix, const Vec3<float> &vec);

std::string bench_sstream_vec(const std::string &prefix,
                              const Vec3<float> &vec);
std::string bench_tinyformat_vec(const std::string &prefix,
                                 const Vec3<float> &vec);
std::string bench_fmt_vec(const std::string &prefix, const Vec3<float> &vec);
