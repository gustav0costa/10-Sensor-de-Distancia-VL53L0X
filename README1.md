# Repositorio criado para as disciplinas, de Sistemas Embarcados e Tecnicas de Prototipagem, do curso de Engenharia de Computação no IFPB Campus Campina Grande.
# O projeto tem como base a utilização do Sensor de Distancia VL53L0X.
#
# Com esse projeto visamos projetar uma trena eletronica, a mesma possui a tarefa de realizar a medida de determinadas distancias, desde que respeitada a sua limitação. 
# 
# Componentes:
#     - Sensor de distancia VL53L0X
#     - Display oled 128x32 I2C
#     - Microcontrolador ESP-32-WROOM
#
# O sensor terá a responsabilidade de medir a distancia até determinado ponto, no qual o laser consegue atingir, desde que seja menor ou igual ao seu alcance maximo que é de aproximadamente 2 metros.
#
# O display será utilizado apenas para retornar, visualmente, ao usuario, o valor medido em metros.
