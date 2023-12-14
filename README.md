# Instalação Digital

- André Santos
- Cesar Filho
- Matheus
- Eduardo Abreu
- Gustavo
- João Paulo Salamon
- Guilherme Barbosa

## Dados

<p>
Uma matriz 3d foi usada para acomodar os dados que serão usados, pensada como umatabela/matriz 2d para cada rótulo, o que equivale à matriz 3d citada,
sendo as <em>cidades</em> dispostas nas <em>linhas</em>, os <em>anos</em> nas <em>colunas</em>, enquanto os rótulos são a profundidade da matriz.
</p>

## Motivação

<p>
Todos os anos, uma infinidade de pessoas são vítimas de acidentes no trânsito, queiram esses terminem em fatalidade ou não, diante disso, esse projeto visa mostrar de maneira informativa e dinâmica alguns dados relacionados a essa temática para a população em geral, através de fitas de Led
</p>

## Esquemático
![esquematico](Imagens/0e7befee-a6f6-4e4a-9583-af783733950f.jfif)

## Componentes

- 1 Arduíno.
- 3 Resistores de 220Ω.
- 4 Sensores de Ultrassom.
- Um visor LCD de 7 segmentos.
- Um visor LCD 16x2.
- 2 fitas de LED.
- 3 Botões para a passagem do tipo de dados.

<h2>Índices</h2>

<div>
  <div>
    <h3>Rótulos (i)</h3>
    0: Atropelamentos <br>
    1: Colisões<br>
    2: Capotamentos<br>
  </div>
  <div>
    <h3>Cidades (j)</h3>
    0: Vitória<br>
    1: Vila Velha<br>
    2: Serra<br>
    3: Cariacica<br>
    4: *BRASIL*<br>
  </div>
  <div>
    <h3>Anos (k)</h3>
    0: 2019<br>
    1: 2020<br>
    2: 2021<br>
    3: 2022<br>
  </div>
</div>

<h2>Acesso</h2>

<table>
<h3>Rótulo (i=0)</h3>
<tbody>
  <tr>
    <td>Cidade/Ano (j/k)</td>
    <td>2019</td>
    <td>2020</td>
    <td>2021</td>
    <td>2023</td>
  </tr>
  <tr>
    <td>Vitória</td>
    <td>000</td>
    <td>001</td>
    <td>002</td>
    <td>003</td>
  </tr>
  <tr>
    <td>Vila Velha</td>
    <td>010</td>
    <td>011</td>
    <td>012</td>
    <td>013</td>
  </tr>
  <tr>
    <td>Serra</td>
    <td>020</td>
    <td>021</td>
    <td>022</td>
    <td>023</td>
  </tr>
  <tr>
    <td>Cariacica</td>
    <td>030</td>
    <td>031</td>
    <td>032</td>
    <td>033</td>
  </tr>
</tbody>
</table>

<table>
<h3>Rórulo (i=1)</h3>
<tbody>
  <tr>
    <td>Cidade/Ano (j/k)</td>
    <td>2019</td>
    <td>2020</td>
    <td>2021</td>
    <td>2023</td>
  </tr>
  <tr>
    <td>Vitória</td>
    <td>100</td>
    <td>101</td>
    <td>102</td>
    <td>103</td>
  </tr>
  <tr>
    <td>Vila Velha</td>
    <td>110</td>
    <td>111</td>
    <td>112</td>
    <td>113</td>
  </tr>
  <tr>
    <td>Serra</td>
    <td>120</td>
    <td>121</td>
    <td>122</td>
    <td>123</td>
  </tr>
  <tr>
    <td>Cariacica</td>
    <td>130</td>
    <td>131</td>
    <td>132</td>
    <td>133</td>
  </tr>
</tbody>
</table>

<table>
<h3>Rótulo (i=2)</h3>
<tbody>
  <tr>
    <td>Cidade/Ano (j/k)</td>
    <td>2019</td>
    <td>2020</td>
    <td>2021</td>
    <td>2023</td>
  </tr>
  <tr>
    <td>Vitória</td>
    <td>200</td>
    <td>201</td>
    <td>202</td>
    <td>203</td>
  </tr>
  <tr>
    <td>Vila Velha</td>
    <td>210</td>
    <td>211</td>
    <td>212</td>
    <td>213</td>
  </tr>
  <tr>
    <td>Serra</td>
    <td>220</td>
    <td>221</td>
    <td>222</td>
    <td>223</td>
  </tr>
  <tr>
    <td>Cariacica</td>
    <td>230</td>
    <td>231</td>
    <td>232</td>
    <td>233</td>
  </tr>
</tbody>
</table>

## Vídeo Informativo
<a href="https://www.youtube.com/watch?v=-6mdEl3Wj2E&ab_channel=CesarB.Arts">Assista ao nosso vídeo para entender mais!</a>


<h2>Referências</h2>
