#include <stdio.h>

int main (){
	
	char A_seq, B_seq, C_seq ;
	int n,i, A_score=0, B_score=0, C_score=0 ;
	scanf("%d", &n) ;
	char ans[n] ;
	scanf("\n");
	scanf("%[^\n]%*c", ans) ;
//	printf("%c %c %c", ans[0], ans[1], ans[2]) ;
	for ( i = 0 ; i <= n ; i++){
		switch (i%3){
			case 0 :
				A_seq = 'A' ;
				break ;	
			case 1 :
				A_seq = 'B' ;
				break ;
			case 2 :
				A_seq = 'C' ;
				break ;
		}
		switch (i%4){
			case 0 :
				B_seq = 'B' ;
				break ;	
			case 1 :
				B_seq = 'A' ;
				break ;
			case 2 :
				B_seq = 'B' ;
				break ;
			case 3 :
				B_seq = 'C' ;
		}

		switch (i%6){
			case 0 :
				C_seq = 'C' ;
				break ;	
			case 1 :
				C_seq = 'C' ;
				break ;
			case 2 :
				C_seq = 'A' ;
				break ;
			case 3 :
				C_seq = 'A' ;
				break ;	
			case 4 :
				C_seq = 'B' ;
				break ;
			case 5 :
				C_seq = 'B' ;
				break ;
		}
//		printf("%c with %c\n", C_seq, ans[i]) ;
		if ( A_seq == ans[i] )
			A_score ++ ;
		if ( B_seq == ans[i] )
			B_score ++ ;
		if ( C_seq == ans[i] )
			C_score ++ ;		
	}
//	if (A_score == B_score && A_score == C_score)
//		printf("%d \nAdrian\nBruno\nGoran", A_score) ;
//	printf("%d %d %d\n", A_score, B_score, C_score) ;
	if ( A_score >= B_score && A_score >= C_score ){
		printf("%d\nAdrian\n", A_score) ;
		if ( A_score == B_score)
			printf("Bruno\n") ;
		if ( A_score == C_score)
			printf("Goran") ;
	} else if ( B_score >= A_score && B_score >= C_score ) {
		printf("%d\n", B_score) ;
		if ( A_score == B_score)
			printf("Adrian\n") ;
		printf("Bruno\n") ;	
		if ( B_score == C_score)
			printf("Goran") ;		
	} else if ( C_score >= A_score && C_score >= B_score ){
		printf("%d\n", C_score) ;
		if ( C_score == A_score)
			printf("Adrian\n") ;
		if ( C_score == B_score)
			printf("Bruno\n") ;
		printf("Goran") ;
	}


	
	
	return 0 ;
}
