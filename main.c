#include <stdio.h>

int main(int argc, char const *argv[])
{
    float ha = 10000.0,ha1 =1.5 , espacamento1 = 0.6, espacamento2=0.5, superfosfatoP = 18.0, ureiaN = 45.0, potassioCloretoK = 60.0, p = 1.4, k = 0.04, fosforoP, nitrogenioN, potassioK, coberturaN;
    nitrogenioN = 40.0;
    coberturaN = 80.0;
    if (p < 11.0)
    {
        fosforoP = 160.0;
    }
    if (k < 0.12)
    {
        potassioK = 120.0;
    }
    else if (k >= 0.12 && k < 0.38)
    {
        potassioK = 20.0;
    }

    float resultN = (nitrogenioN / ureiaN) * 100.0;
    printf("N %.1f00\n", resultN);
    float resultP = (fosforoP / superfosfatoP) * 100.0;
    printf("P %.1f00\n", resultP);
    float resultK = (potassioK / potassioCloretoK) * 100.0;
    printf("K %.1f00\n", resultK);
    float resultCobertN = (coberturaN / ureiaN) * 100.0;
    printf("cobertura n %.1f00\n", resultCobertN);
    float area = (ha / espacamento1);
    printf("Area %.1f\n", area);

    float ureia = (resultN / area) * 1000;
    printf("ureia %.1f\n", ureia);
    float sSimples = (resultP / area) * 1000;
    printf("sSimples %.2f\n", sSimples);
    float kci = (resultK / area) * 1000;
    printf("kci %.3f\n", kci);
    printf("Mistura npk %.1f\n", (ureia + sSimples + kci));

    float ureiaCobertura = (resultCobertN / area) * 1000;
    printf("ureiaCobertura %.1f\n", ureiaCobertura);

    printf("Simplificando NPK %f\n", ((resultK + resultN + resultP) / area)* 1000);

    printf("qtd ureia  plantio %f  qtd ureia  cobertura %f  qtd superfosfato simples %f qtd Cloreto de potássio %f", (resultN * ha1), (resultCobertN * ha1), (resultP * ha1), (resultK * ha1));
    return 0;
}
