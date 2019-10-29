
|               ns/op |                op/s |   MdAPE | benchmark
|--------------------:|--------------------:|--------:|:----------------------------------------------
|              634.18 |        1,576,837.59 |    3.0% | `snprintf`
|            1,530.64 |          653,321.05 |    0.2% | `sstream`
|            1,787.20 |          559,534.47 |    2.9% | `tinyformat`
|              458.06 |        2,183,103.75 |    0.4% | `fmt`
|            1,438.16 |          695,334.93 |    2.8% | `sstream_vec`
|            1,428.62 |          699,977.53 |    1.8% | `tinyformat_vec`
|              402.96 |        2,481,666.58 |    1.6% | `fmt_vec`

snprintf:
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
sstream: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,  2, 3}
tinyformat: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
fmt: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
sstream_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
tinyformat_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
fmt_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
