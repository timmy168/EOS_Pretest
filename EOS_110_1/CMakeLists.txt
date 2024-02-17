cmake_minimum_required(VERSION 2.6)
project(EOS_110_1)

add_executable(EOS_110_1_1 src/EOS_110_1_1.c)
target_link_libraries(EOS_110_1_1 m)
add_executable(EOS_110_1_3 src/EOS_110_1_3.c)
add_executable(EOS_110_1_4 src/EOS_110_1_4.c)
add_executable(EOS_110_1_5 src/EOS_110_1_5.c)