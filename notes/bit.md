Bit	          |   7	|  6 | 5  | 4  | 3 | 2 | 1 | 0
--------------|-----|----|--- |----|---|---|-----
Value (Weight)|	128	| 64 | 32 | 16 | 8 | 4 | 2 | 1



Operator	Effect on Color (one word)	Explanation
&	Masking	Keep certain bits, zero out others
`	`	Setting
^	Toggling	Flip selected bits
~	Inverting	Flip all bits (complement)
<<	Brighten	Multiply channel value (shift left)
>>	Dim	Divide channel value (shift right)