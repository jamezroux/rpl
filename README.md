<div id="menu">
	<ul>
		<li><h4>Contents</h4></li>
		<li><a href="#introduction">Introduction</a></li>
		<li><a href="#purpose">Purpose</a></li>
		<li><a href="#hello">Hello World</a></li>
		<li><a href="#syntax">Syntax</a></li>
		<li><a href="#compile">How To Compile</a></li>
		<li><a href="#examples">Examples</a></li>
	</ul>
	<hr>
	<table cellpadding: 5>
		<tr><td>Kik</td><td><a href="http://kik.me/Archlinux.">Archlinux.</a></td></tr>
		<tr><td>Email</td><td><a href="mailto:admin@laveyan.co">admin@laveyan.co</a></td></tr>
		<tr><td>Twitter</td><td><a href="http://twitter.com/B1ood6od">B1ood6od</a></td></tr>
	</table>
</div>
<div id="main">
	<h1 align="center">The Rubiks Programming Language</h1>
	<h3 align="center"><strong>James</strong></h3>
	<h3 align="center"><strong>Designed December, of 2015</strong></h3>
	<h1 id="introduction">Introduction</h1>	
	<p>You know those fun toys everyone has a child? The colorful, six sided objects which twisted and whatnot? Well how about we make them more complicated; and not only that but lets add some programming to it too!</p>
	<p>The Rubiks programming language is a combination of <a href="http://esolangs.org/befunge">Befunge</a> and the famous Rubiks Cube. It was a spontaneous, late night idea and followed through for the sole purpose of tom-foolery, headaches, and learning.</p>
	<h1 id="purpose">Purpose</h1>
	<p>As stated earlier, the purpose of this project is to create a language focused areount befunge and Rubiks cubes. I wanted to touch the waters of multidimensional programming. This is my first brain child, and I foresee more languages based from this logic in the future.</p>
	<h1 id="hello">Hello World</h1>
	<p>Hello world is relatively simple, if of course you enjoy having to use numerical values for ASCII and are familiar with befunge.</p>
	<p><code>98*,54*5*1+,54*5*8+,54*5*8+,54*5*9+2+,65*2+,99*6+,54*5*9+2+,54*5*7+7+,54*5*8+,54*5*,25*@</code></p>
	<p>As you can see in the above example, rpl can be programmed quite like befunge (as it indeed gets much of its syntax from befunge).</p>
	<h1 id="syntax">Syntax</h1>
	<p>Now for the grits of the language, the syntax!</p>
	<table cellpadding=5>
		<tr><td><strong>Syntax</strong></td><td><strong>Usage</strong></td></tr>
		<tr><td>+</td><td>Pop both variables in stack, and push [a]+[b]</td></tr>
		<tr><td>-</td><td>Pop both variables in stack, and push [b]-[a]</td></tr>
		<tr><td>*</td><td>Pop both variables in stack, and push [a]*[b]</td></tr>
		<tr><td>/</td><td>Pop both variables in stack, and push [b]/[a]</td></tr>
		<tr><td>%</td><td>Pop both variables in stack, and return int remainder of [b]/[a]</td></tr>
		<tr><td>_</td><td>Pop top value off stack: if value=0, go right, else left</td></tr>
		<tr><td>|</td><td>Pop top value off stack: if value=0, go down, else up</td></tr>
		<tr><td>\</td><td>Swap both values in stack</td></tr>
		<tr><td><strong>Rubiks Syntax</strong></td><td><strong>Usage</strong></td></tr>
		<tr><td>R</td><td> </td></tr>
		<tr><td>r</td><td> </td></tr>
		<tr><td>U</td><td> </td></tr>
		<tr><td>u</td><td> </td></tr>
		<tr><td>L</td><td> </td></tr>
		<tr><td>l</td><td> </td></tr>
		<tr><td>F</td><td> </td></tr>
		<tr><td>f</td><td> </td></tr>
		<tr><td>B</td><td> </td></tr>
		<tr><td>b</td><td> </td></tr>
		<tr><td>D</td><td> </td></tr>
		<tr><td>d</td><td> </td></tr>
		<tr><td>M</td><td> </td></tr>
		<tr><td>m</td><td> </td></tr>
		<tr><td>E</td><td> </td></tr>
		<tr><td>e</td><td> </td></tr>
		<tr><td>S</td><td> </td></tr>
		<tr><td>s</td><td> </td></tr>
		<tr><td>X</td><td> </td></tr>
		<tr><td>x</td><td> </td></tr>
		<tr><td>Y</td><td> </td></tr>
		<tr><td>y</td><td> </td></tr>
		<tr><td>Z</td><td> </td></tr>
		<tr><td>z</td><td> </td></tr>
	</table>
	<h1 id="compile">How To Compile</h1>
	<p>You dont, good luck with that. I have yet to write an interpreter, but feel free to bash my hopes and dreams by doing it.</p>
	<h1 id="examples">Examples</h1>
	<p>Refer to <a href="#hello">hello world</a>, no examples as of yet.</p>
</div>
