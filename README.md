# insertionsort_c

### 概要

挿入ソートのアルゴリズム  
C言語による実装

### 説明

1. アルゴリズム  
	1. ソートする配列の先頭の要素を決定する
	1. 手順1の次の要素(先頭から2番目)を変数xに格納する  
	1. 変数xに格納(退避)させた為、配列にはスペースができる
	1. 最初の要素と変数xを比較する
	1. 比較の結果、手順3で空いたスペースを利用して前後に挿入する

1. 実行時間  
	O(n^2)  
	ほぼ整列しているデータに対しては非常に早い  
