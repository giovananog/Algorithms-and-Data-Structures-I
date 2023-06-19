
<div class="css-s24vha"><h1 data-sourcepos="1:1-1:35">Trabalho 1 - Repetição e seleção</h1>
<hr data-sourcepos="2:1-2:4">
<h2 data-sourcepos="3:1-3:12">Objetivo</h2>
<blockquote data-sourcepos="4:1-4:189">
<p data-sourcepos="4:3-4:189">Revisar os conceitos fundamentais relacionados a linguagem de programação C, tais como: declaração de variáveis, entrada e saída, expressões, atribuição, comandos de seleção e repetição.</p>
</blockquote>
<hr data-sourcepos="5:1-5:4">
<h2 data-sourcepos="6:1-6:12">Problema</h2>
<blockquote data-sourcepos="7:1-12:92">
<p data-sourcepos="7:3-7:111">O número <strong data-sourcepos="7:12-7:20">1089</strong> é conhecido como <strong data-sourcepos="7:38-7:55">número mágico</strong>. Esse título deve-se a seguinte curiosidade matemática:</p>
<ol data-sourcepos="8:3-12:92">
<li data-sourcepos="8:3-8:63">Escolha um número qualquer com três algarismos distintos.</li>
<li data-sourcepos="9:3-9:78">Escreva esse número, só que com os algarismos ao contrário (invertidos).</li>
<li data-sourcepos="10:3-10:82">Subtraia o maior do menor dos dois números (número escolhido e o invertido).</li>
<li data-sourcepos="11:3-11:61">Inverta também os algarismos do resultado da subtração.</li>
<li data-sourcepos="12:3-12:92">Some o resultado da subtração e sua inversão. Curiosamente, o resultado será <strong data-sourcepos="12:83-12:92">1089!</strong></li>
</ol>
</blockquote>
<p data-sourcepos="14:1-14:182">Tomemos como exemplo o número 146 (com os três algarismos diferentes, 1, 4 e o 6). Esse número invertido é 641. A subtração do maior para o menor dos dois números é: 641 - 146 = 495</p>
<p data-sourcepos="16:1-16:101">O resultado da subtração, 495, invertido é 594. A soma desse dois últimos números é:495 + 594 = 1089</p>
<hr data-sourcepos="18:1-18:4">
<h2 data-sourcepos="20:1-20:13">Descrição</h2>
<ul data-sourcepos="22:1-24:186">
<li data-sourcepos="22:1-22:168">A sua tarefa é desenvolver um programa que calcule essa curiosidade matemática para todas as combinações de números com três algarismos distintos, conforme descrito.</li>
<li data-sourcepos="23:1-23:93">O programa não deve ler nenhuma entrada. Os números devem ser gerados no próprio programa.</li>
<li data-sourcepos="24:1-24:186">A saída esperada deve apresentar o resultado dos cálculos que comprovam essa curiosidade matemática para todas as combinações de números com 3 algarismos distintos, da seguinte forma:</li>
</ul>
<pre data-sourcepos="26:1-40:4"><div class="css-4g8ex7"><div class="css-1ulik5s"><code class="css-1uyekwq" style="font-size: 14px; tab-size: 2; word-break: break-word; white-space: break-spaces; overflow-wrap: anywhere; cursor: text;"><div class="css-a1fbvo"><span class="css-1okvcqf">caso   1: 321-123=198, 198+891=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   2: 421-124=297, 297+792=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   3: 521-125=396, 396+693=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   4: 621-126=495, 495+594=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   5: 721-127=594, 594+495=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   6: 821-128=693, 693+396=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   7: 921-129=792, 792+297=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   8: 231-132= 99,  99+990=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso   9: 431-134=297, 297+792=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso  10: 531-135=396, 396+693=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">...</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso 503: 986-689=297, 297+792=1089</span></div><div class="css-a1fbvo"><span class="css-1okvcqf">caso 504: 987-789=198, 198+891=1089</span></div></code><div class="css-end0zc"><div class="css-ggepfv"><div class="css-36v8q4"><button type="button" aria-label="Copy code to clipboard" class="css-1c6n1vh" style="--height: 24px; --width: 24px;"><svg preserveAspectRatio="xMidYMin" width="16" height="16" viewBox="0 0 24 24" fill="currentColor" aria-hidden="true" class="css-492dz9" style="--size: 16px; --rotate: 0deg;"><path fill-rule="evenodd" clip-rule="evenodd" d="M9.05546 2.05546C9.57118 1.53973 10.2707 1.25 11 1.25H20C20.7293 1.25 21.4288 1.53973 21.9445 2.05546C22.4603 2.57118 22.75 3.27065 22.75 4V13C22.75 13.7293 22.4603 14.4288 21.9445 14.9445C21.4288 15.4603 20.7293 15.75 20 15.75H19C18.5858 15.75 18.25 15.4142 18.25 15C18.25 14.5858 18.5858 14.25 19 14.25H20C20.3315 14.25 20.6495 14.1183 20.8839 13.8839C21.1183 13.6495 21.25 13.3315 21.25 13V4C21.25 3.66848 21.1183 3.35054 20.8839 3.11612C20.6495 2.8817 20.3315 2.75 20 2.75H11C10.6685 2.75 10.3505 2.8817 10.1161 3.11612C9.8817 3.35054 9.75 3.66848 9.75 4V5C9.75 5.41421 9.41421 5.75 9 5.75C8.58579 5.75 8.25 5.41421 8.25 5V4C8.25 3.27065 8.53973 2.57118 9.05546 2.05546ZM1.25 11C1.25 9.48122 2.48122 8.25 4 8.25H13C14.5188 8.25 15.75 9.48122 15.75 11V20C15.75 21.5188 14.5188 22.75 13 22.75H4C2.48122 22.75 1.25 21.5188 1.25 20V11ZM4 9.75C3.30964 9.75 2.75 10.3096 2.75 11V20C2.75 20.6904 3.30964 21.25 4 21.25H13C13.6904 21.25 14.25 20.6904 14.25 20V11C14.25 10.3096 13.6904 9.75 13 9.75H4Z">
