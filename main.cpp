#include <iostream>
#include <deque>
using namespace std;

deque<int>dq;
//  price tag 노래 좋은데?

int T,N;
string P;
string X;// 배열 입력 받을 함수 적어야함. X1


void _R(){  // 앞뒤 순서 바꾸는 함수

    for(int i=0; i<dq.size(); i++){
        int T=dq.front()   ;    // 젤 앞에 있는 숫자를 젤 뒤로 넣기 위해 T로 저장하고
        dq.pop_front(); //쓸모없어져서 첫번쨰 없앰
        dq.push_back(T);    // 첫번째 수를 저장한 T를 젤 뒤로 넣음.
    }
}

void _D(){  // 첫번째 삭제하는 함수
   
    //1. 비어 있을 경우 에러 발생
    if(dq.empty()){
        cout<<"error"<<endl;    // 오류일 경우 error 출력
        return;   //오류 출력했으니 종료
    } else{
        dq.pop_front(); // 호출하고나서 삭제

    }


}


int main(){

    cin>>T;
    while(T--){
        cin>>P;
        cin>>N;
        cin>>X;

        for(int i=0; i<X.size(); i++){
            if(X[i]=='[' || X[i]==']' || X[i]==' '){
                continue;
            } else{
                dq.push_front(X[i]);    //X배열을 입력받고 숫자만 dq에 저장하기 성공!

            }

        }

        while(!dq.empty()){ // 비어 있지않을 경우만 실행
            int RD=dq.front();
            if(RD == 'R'){
                _R();   //R일 경우 _R함수 호출

            } else{
                _D();   //아닐 경우는 D만 있으므로 _D함수 호출
            }
            
        }

        // 출력
        if(!dq.empty()){
            cout<<"[";
            for(int i=0; i<dq.size(); i++){
                cout<<dq[i];
                if(i==dq.size()-1){
                    cout<<"]"<<endl;
                } else{
                    cout<<",";
                }    
            }
        }
    }

}

/*
문제점
1.배열 입력 함수 어떻게할지 모름

2.R은 스택 함수 D는 큐함수 이용해야할거같다고 생각만 듦. 구체적인 코드 구현 어려움

3. 

*/



/*
R 앞뒤 순서 바꿈
D 1번째 버림.
비어있는데 D할 경우 에러

T최대 100 
P 1보다 크거나 100000보다 작음 
n 0 ≤ n ≤ 100,000
배열 1 ≤ xi ≤ 100




*/