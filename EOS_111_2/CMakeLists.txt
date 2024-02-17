cmake_minimum_required(VERSION 2.6)
project(EOS_111_2)

add_executable(EOS_111_2_1 src/EOS_111_2_1.c)
add_executable(EOS_111_2_2 src/EOS_111_2_2.c)
target_link_libraries(EOS_111_2_2 m)
add_executable(EOS_111_2_3 src/EOS_111_2_3.c)
add_executable(EOS_111_2_4 src/EOS_111_2_4.c)
add_executable(EOS_111_2_5 src/EOS_111_2_5.c)