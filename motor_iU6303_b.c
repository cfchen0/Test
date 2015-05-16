void InitialTable(void)
{
#pragma asm
setini:
db	1000B			;0   forward
db	5			;1   hall_init
db	0			;2   aglhi
dW	1000h			;3,4 duty_temp_i
db	30			;5   I_lim
db	13			;6   I_prot
dW	1600			;7,8 speed_lim
db	0			;9   kp
db	0			;10   ki

aglh0tbl:
dw	40h 	 		;0	40rpm/bit
db	4 	 		;1
db	4 	 		;2
db	4 	 		;3
db	4 	 		;4
db	4 	 		;5	200
db	5 	 		;6
db	6 	 		;7
db	7 	 		;8
db	8 	 		;9
db	9 	 		;10	400
db	10H	 		;11
db	11	 		;12
db	12	 		;13
db	13	 		;14
db	14	 		;15	600
db	15	 		;16
db	16	 		;17
db	17	 		;18
db	18	 		;19
db	19	 		;20	800
db	20 	 		;21
db	21	 		;22
db	22	 		;23
db	23	 		;24
db	24	 		;25	1000
db	24	 		;26
db	24			;27
db	24			;28
db	24			;29
db	24			;30	1200
db	24			;31
db	24			;32
db	24			;33
db	24			;34
db	24			;35	1400
db	24			;36
db	24			;37
db	24			;38
db	24			;39
db	24			;40	1600
db	24			;41
db	24			;42
db	24			;43
db	24			;44
db	24			;45	1800
db	24			;46
db	24			;47
db	24			;48
db	24			;49
db	24			;50	2000
db	24			;51
db	24			;52
db	24			;53
db	24			;54
db	24			;55	2200
db	24			;56
db	24			;57
db	24			;58
db	24			;59
db	24			;60	2400
db	24			;61
db	24			;62
db	24			;63
db	24			;64
db	24			;65	2600
db	24			;66
db	24			;67
db	24			;68
db	24			;69
db	24			;70	2800
db	24			;71
db	24			;72
db	24			;73
db	24			;74
db	24			;75	3000
db	24			;76
db	24			;77
db	24			;78
db	24			;79
db	24			;80	3200
db	24			;81
db	24			;82
db	24			;83
db	24			;84
db	24			;85	3200
db	24			;86
db	24			;87
db	24			;88
db	24			;89
db	24			;90	3400
db	24			;91
db	24			;92
db	24			;93
db	24			;94
db	24			;95	3600
db	24			;96
db	24			;97
db	24			;98
db	24			;99
db	24			;100	4000
db	24			;101
db	24			;102
db	24			;103
db	24			;104
db	24			;105
db	24			;106
db	24			;107
db	24			;108
db	24			;109
db	24			;110
db	24			;111
db	24			;112
db	24			;113
db	24			;114
db	24			;115
db	24			;116
db	24			;117
db	24			;118
db	24			;119
db	24			;120
db	24			;121
db	24			;122
db	24			;123
db	24			;124
db	24			;125
db	24			;126
db	24			;127

dutytb:
db	25              	;0	
db	25              	;1       
db	25              	;2       
db	25              	;3       
db	25              	;4       
db	25              	;5	
db	25              	;6       
db	25              	;7       
db	25              	;8       
db	25              	;9       
db	25              	;10	
db	25              	;11      
db	25              	;12      
db	25              	;13      
db	25              	;14      
db	25              	;15	
db	25              	;16      
db	25              	;17      
db	25              	;18      
db	25              	;19      
db	25              	;20	
db	25              	;21      
db	25              	;22      
db	25              	;23      
db	25              	;24      
db	25              	;25	
db	25              	;26      
db	25              	;27      
db	25              	;28      
db	25              	;29      
db	25              	;30	
db	25              	;31      
db	25              	;32      
db	25              	;33      
db	25              	;34      
db	25              	;35	
db	25              	;36      
db	25              	;37      
db	25              	;38      
db	25              	;39      
db	25              	;40	
db	25              	;41      
db	25              	;42      
db	25              	;43      
db	25              	;44      
db	25              	;45	
db	25              	;46      
db	25              	;47      
db	25              	;48      
db	25              	;49      
db	25              	;50	
db	25              	;51      
db	25              	;52      
db	25              	;53      
db	25              	;54      
db	28              	;55	
db	31              	;56      
db	34              	;57      
db	38              	;58      
db	41              	;59      
db	44              	;60	
db	47              	;61      
db	50              	;62      
db	53              	;63      
db	56              	;64      
db	59              	;65	
db	63              	;66      
db	66              	;67      
db	69              	;68      
db	72              	;69      
db	75              	;70	
db	78              	;71      
db	81              	;72      
db	84              	;73      
db	88              	;74      
db	91              	;75	
db	94              	;76      
db	97              	;77      
db	100             	;78      
db	103             	;79      
db	106             	;80	
db	110             	;81      
db	113             	;82      
db	116             	;83      
db	119             	;84      
db	122             	;85	
db	125             	;86      
db	128             	;87      
db	131             	;88      
db	135             	;89      
db	138             	;90	
db	141             	;91      
db	144             	;92      
db	147             	;93      
db	150             	;94      
db	153             	;95	
db	157             	;96      
db	160             	;97      
db	163             	;98      
db	166             	;99      
db	169             	;100     
db	172             	;101     
db	175             	;102     
db	178             	;103     
db	182             	;104     
db	185             	;105     
db	188             	;106     
db	191             	;107     
db	194             	;108     
db	197             	;109     
db	200             	;110     
db	203             	;111     
db	207             	;112     
db	210             	;113     
db	213             	;114     
db	216             	;115     
db	216             	;116     
db	216             	;117     
db	216             	;118     
db	216             	;119     
db	216             	;120     
db	216             	;121     
db	216             	;122     
db	216             	;123     
db	216             	;124     
db	216             	;125     
db	216             	;126     
db	216             	;127     
#pragma endasm
}

#pragma endasm
