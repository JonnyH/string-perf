
|               ns/op |                op/s |   MdAPE | benchmark
|--------------------:|--------------------:|--------:|:----------------------------------------------
|              615.80 |        1,623,893.17 |    0.1% | `snprintf`
|            1,547.31 |          646,282.76 |    3.1% | `sstream`
|            1,809.92 |          552,509.23 |    0.1% | `tinyformat`
|              449.72 |        2,223,611.98 |    0.4% | `fmt`
|            1,537.62 |          650,357.15 |    2.7% | `sstream_vec`
|            1,497.00 |          668,002.67 |    1.1% | `tinyformat_vec`
|              415.71 |        2,405,531.64 |    2.8% | `fmt_vec`

|    test|    output
|-------:|---------
| snprintf | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
| sstream | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,  2, 3}
| tinyformat | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
| fmt | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
| sstream_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
| tinyformat_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
| fmt_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
