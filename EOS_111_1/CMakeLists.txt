cmake_minimum_required(VERSION 2.6)
project(EOS_111_1)

add_executable(EOS_111_1_2 src/EOS_111_1_2.c)
add_executable(EOS_111_1_3 src/EOS_111_1_3.c)
add_executable(EOS_111_1_5 src/EOS_111_1_5.c)
target_link_libraries(EOS_111_1_5 m)