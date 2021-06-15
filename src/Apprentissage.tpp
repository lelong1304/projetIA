//
// Created by DO THU HANG on 6/15/2021.
//


template<class I, int Nb> Apprentissage<I,Nb>::Apprentissage(NN1 * nn1) {
    this->nn = nn1;
}

template<class I, int Nb> void Apprentissage<I,Nb>::apprendre_base(int K, double pas_de_gradient) {
    srand(time(NULL));

    for (int i=0; i<K; i++) {
        int idx = rand() % Nb;
        I input(idx);
        nn->apprentissage(input, pas_de_gradient);
    }
}

template<class I, int Nb> int Apprentissage<I,Nb>::evaluer() {
    int counter = 0;
    for (int i = 0; i < Nb; i++) {
        I input(i);
        char label = input.get_label();
        if(nn->evaluation(input) == label){
            counter++;
        }
    }
    return counter;

}
