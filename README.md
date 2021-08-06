# Repositorio criado para as disciplinas, de Sistemas Embarcados e Tecnicas de Prototipagem, do curso de Engenharia de Computação no IFPB Campus Campina Grande.
# O projeto tem como base a utilização do Sensor de Distancia VL53L0X.
#
# Com esse projeto visamos projetar uma trena eletronica, a mesma possui a tarefa de realizar a medida de determinadas distancias, desde que respeitada a sua limitação. 
# 
# Componentes:
#     - Sensor de distancia VL53L0X
#     - Display oled 128x32 I2C
#     - Microcontrolador ATMEGA328P
#
# Descrição:
#     - O sensor de Distância VL53L0X é um módulo eletrônico de alta precisão. Ele é capaz de fazer medições de distâncias com mínima margem de erro se comparado a outros sensores existentes. O funcionamento é simples, quando em operação ele envia um laser invisível a olho nu, onde esse é refletivo e volta, fazendo com que o sensor consiga medir com exatidão o tempo de resposta, fazendo a conversão na respectiva medida obtida.
#
# O sensor terá a responsabilidade de medir a distancia até determinado ponto, no qual a onda infra-vermelha consegue atingir, desde que seja menor ou igual ao seu alcance maximo que é de aproximadamente 2 metros.
#
