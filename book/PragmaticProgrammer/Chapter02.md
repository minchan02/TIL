# The Pragmatic Programmer
## :pencil: TIL  
### DAY 2 (2022.03.21)
:book: 오늘 읽은 범위 : 2장, 실용주의 접근법
---
> :smile: **책에서 기억하고 싶은 내용을 써보세요.**
 - 잘 설계된 코드는 바뀜으로써 사용하는 사람에게 맞춰져야 한다. 그래서 우리는 ETC원칙을 따른다. 바꾸기 더 쉽게(Easier To Change) ETC. 이게 전부다. (p.39)
 - 여러분이 작성하는 코드를 교체하기 쉽게 만들도록 노력하는 것이다. (p.40)
 - DRY : 반복하지 말라(Don't Repeat yourself) (p.43)
 - 모든 코드 중복이 지식의 중복은 아니다. (p.47)
 - 가능하다면 언제나 객체의 속성을 읽고 쓸 때 접근자 함수를 사용하라. 그러면 나중에 기능을 추가하기 더 쉬워질 것이다. (p.50)
 - 여러분은 뭔가를 직접 만드는 것보다 기존의 것을 찾아내고 재사용하기 쉬운 환경을 조성해야 한다. (p.54)
 - 관련 없는 것들 간에 서로 영향이 없도록 하라. (p.56)
 - 부끄럼쟁이 코드를 작성하라. 즉, 불필요한 것은 다른 모듈에 보여 주지 않으며, 다른 모듈의 구현에 의존하지 않는 코드를 작성하라. (p.61)
 - 전역 데이터를 피하라. 코드가 전역 데이터를 참조할 때마다 코드는 해당 데이터를 공유하는 다른 컴포넌트와 묶이게 된다. (p.61)
 - 많은 개발자가 싱글턴 객체를 일종의 전역 데이터로 남용한다. 싱글턴을 사용할 때는 주의를 기울여라. (p.62)
 - 테스트를 마친 뒤 코드를 병합할 때 버그 수정에 대한 태그를 붙여라. (p.63)
 - 여러분의 코드를 여러 컴포넌트로 쪼개라. (p.69)
 - 시스템을 정의하는 중요한 요구 사항을 찾아라. 의문이 드는 부분이나 가장 위험이 커 보이는 곳을 찾아라. 이런 부분의 코드를 가장 먼저 작성하도록 개발 우선순위를 정하라. (p.73)
 - 프로토타입을 코드로 만들 때는 시작하기 전에 항상 모든 사람에게 여러분이 폐기 처분할 코드를 작성하고 있다는 사실을 이해시켜야 한다. (p.83)
 - 문제 도메인에 가깝게 프로그래밍하라. (p.85)
 - 추정치가 틀렸더라도 움츠리거나 도망가지 말라. 왜 틀렸는지 찾아라. (p.99)
 
> :thinking: **오늘 읽은 소감은? 떠오르는 생각을 가볍게 적어보세요**
 - 2장은 깔끔한 코드 작성법, 관리법 등 기술적인 부분에 초점이 잡혀져 있던 것 같았다. 때문에 저번 노개북 때 읽었던 클린코드 책의 내용을 다시 떠올리며 읽을 수 있었다.
 - 기억에 유독 남았던 점이 싱글톤 사용 주의점이다. 싱글톤 사용에 익숙치가 않아 싱글톤을 단지 외부에서 스크립트를 유용하게 끌어오기위해 사용해서 다소 난해하게 남용한 부분이 있었는데 이부분을 찔러줬던 것 같다.
 - 이번 장 후반이 특히 읽기 힘들었다. 도메인 언어부터 해서 어려운 용어들이 마구 나와 이해하기가 힘들었다.... 무리하게 용어들을 찾아봐서 읽긴 했는데 경험이 부족한 지금 다시 읽어봐도 잘 이해하지 못할 것이다.. 조금 더 공부후에 다시펴보면 달라져 있지 않을까...?

> :mag_right: **궁금한 내용이 있거나, 잘 이해되지 않는 내용이 있다면 적어보세요.**
 - 트랜잭션 : 트랜잭션(Transaction 이하 트랜잭션)이란, 데이터베이스의 상태를 변화시키기 해서 수행하는 작업의 단위를 뜻한다.
 - 애너테이션 : 코드에 넣는 주석과 비슷한 기능.
 - 파서, 도메인 언어
