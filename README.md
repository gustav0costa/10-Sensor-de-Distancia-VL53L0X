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
#
#     - A trena é instrumento manual de material metálico empregado na medição de terrenos. Em sua superficie está gravado o sistema metrico correspondente ao país ao qual se destina, e possui internamente um sistema de mola que retrai a fita metálica, ao ser solta da posição de medida.
#
#     - O display OLED é um diodo que possui um filme organico emissor de luz, em resposta a uma corrente, situado entre dois eletrodos.Por ter pixels acionados individualmente traz um efeito de cores bem fieis.
#
#     - O microcontrolador ATmega328P faz parte da família de microcontroladores de 8 bits baseado na arquitetura AVR lançada pela ATMEL.
#
#     - O sensor de Distância VL53L0X é um módulo eletrônico de alta precisão. Ele é capaz de fazer medições de distâncias com mínima margem de erro se comparado a outros sensores existentes. O funcionamento é simples, quando em operação ele envia um laser invisível a olho nu, onde esse é refletivo e volta, fazendo com que o sensor consiga medir com exatidão o tempo de resposta, fazendo a conversão na respectiva medida obtida.
#
#     - Nossa trena eletronica consistirá em um compartimento pequeno, para ser portatil, para uso em qualquer situação na qual poderia se usar a trena manual. Uma pequena caixa, inicialmente um cubo, pois neste formato facilita o apoio da base nas superficies nas quais se deseja realizar a medida. Na parte da frente estará o sensor de distancia que irá fazer a medida da distancia, e na parte de trás, voltado para o usuário, estará a tela OLED retornando o valor da medida obtido. E na lateral colocaremos uma especie de suporte para ser colocada em cintas de trabalho, ou no proprio cinto comum, caso o usuario nao esteja devidamente equipado.
#
#     - Por ser portatil, nosso sistema funcionará através de baterias, que atinjam a tensão total de 5 volts necessárias para o sistema, estas baterias preferencialmente recarregaveis para evitar custos com aquisições de novas baterias, embora o consumo do equipamento seja baixo, estimamos este tipo de alimentação para facilitar o uso sem custos adicionais, além da aquisição inicial.
#
#     - Ainda na parte traseira do equipamento, voltada para o usuario, será colocado o compartimento que comportará as baterias, bem visivel e de facil acesso para o usuário, caso este queira realizar a troca das baterias, ou retirada para recarregá-las.
#
#     - Para evitar danos, pretendemos involucrar o sistema com revestimento plastico, por resistente e também ser leve, para poder ser carregado sem esforços.
#
#     - O sensor terá a responsabilidade de medir a distancia até determinado ponto, no qual a onda infra-vermelha consegue atingir, desde que seja menor ou igual ao seu alcance maximo que é de aproximadamente 2 metros.
#
