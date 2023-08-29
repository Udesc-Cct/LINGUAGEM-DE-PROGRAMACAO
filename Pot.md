# Código
```c
#include <stdio.h>

float pot(float pb,int pe){
    if(pe==0){
        return 1;
    }
    
    if( pe< 0 )
    {
        return pot(1/pb, -pe);
    }
    
    return pb*pot(pb,pe-1);    
}

int main()
{
    
    printf("%f\n", pot(2,4));
    return 0;
} 

```
# Saída
![image](https://github.com/Udesc-Cct/LINGUAGEM-DE-PROGRAMACAO/assets/50460047/12b03a91-6af3-465a-8760-68a15daa48fb)
