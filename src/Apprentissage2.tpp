//
// Created by long on 15/06/2021.
//

template<class I, class NN, int Nb> Apprentissage2<I,NN,Nb>::Apprentissage2(NN *nn) {
    this->nn = nn;
}


template<class I, class NN, int Nb> void Apprentissage2<I,NN,Nb>::apprendre_base(int K, double pas_de_gradient) {
    srand(time(NULL));
    for (int i=0; i<K; i++) {
        int idx = rand() % Nb;
        I input(idx);
        nn->apprentissage(input, pas_de_gradient);
    }
}

template<class I, class NN, int Nb> int Apprentissage2<I,NN,Nb>::evaluer() {
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