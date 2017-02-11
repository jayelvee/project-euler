/*
7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450
*/

#include <stdio.h>

int main(){

	char num[1001] = "731671765313306249192251196744265747423553491949"
	"349698352031277450632623957831801698480186947885184385861560789112"
	"949495459501737958331952853208805511125406987471585238630507156932"
	"909632952274430435576689664895044524452316173185640309871112172238"
	"311362229893423380308135336276614282806444486645238749303589072962"
	"904915604407723907138105158593079608667017242712188399879790879227"
	"492190169972088809377665727333001053367881220235421809751254540594"
	"752243525849077116705560136048395864467063244157221553975369781797"
	"784617406495514929086256932197846862248283972241375657056057490261"
	"407972968652414535100474821663704844031998900088952434506585412275"
	"886668811642717147992444292823086346567481391912316282458617866458"
	"359124566529476545682848912883142607690042242190226710556263211111"
	"093705442175069416589604080719840385096245544436298123098787992724"
	"428490918884580156166097919133875499200524063689912560717606058861"
	"164671094050775410022569831552000559357297257163626956188267042825"
	"2483600823257530420752963450"; 

	int start = 0; 
	int window = 13;
	long long maxseen = 0; 
	long long product = 1;

	while (start <= (1000 - window)){
		for (int j = start; j < (start + window); j++){
			product *= num[j] - '0';

		}
		if (product > maxseen)
			maxseen = product;
		product = 1;
		start += 1;

	}

	printf("%llu\n", maxseen);

	return 0;

}