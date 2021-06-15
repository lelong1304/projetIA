cmake_minimum_required(VERSION 3.19)
project(projetIA)

set(CMAKE_CXX_STANDARD 14)

add_executable(projetIA src/main.cpp src/Input.cpp src/Input.h src/Iris.cpp src/Iris.h src/Image.cpp src/Image.h src/Fonction_activation.cpp src/Fonction_activation.h src/Tanh.cpp src/Tanh.h src/Sigmoide.cpp src/Sigmoide.h src/Perceptron.cpp src/Perceptron.h src/NN1.cpp src/NN1.h src/Apprentissage.tpp src/Apprentissage.h src/Input_intermediaire.cpp src/Input_intermediaire.h src/NN2.cpp src/NN2.h src/Perceptron_cachee.cpp src/Perceptron_cachee.h src/Apprentissage2.tpp src/Apprentissage2.h)