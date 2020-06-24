// 
// c++ 에서는 자바의 final 키워드(있긴 있지만 다름)가 지원이 안 되기 때문에 
// Lazy Holder 방식의 게으른 최초 한 번 초기화 방식을 사용할 수 없다.
// 그래서 처음부터 메모리 최초 할당을 하여 사용하면 Multi Thread 환경에서 Safe 하다.
// 프로세스 실행 내내 사용하지 않게 되면 메모리가 낭비되는 단점이 있음
//
// ex)
//		public class Something {
//			private Something() {
//			}
//
//			private static class LazyHolder {
//				public static final Something INSTANCE = new Something();
//			}
//
//			public static Something getInstance() {
//				return LazyHolder.INSTANCE;
//			}
//		}
//https://jeong-pro.tistory.com/86

class CSingleton 
{
private :
	CSingleton() {}
	~CSingleton()
	{
		if( m_pInstance )
		{
			delete m_pInstance;
		}		
	}
private :
	static CSingleton* m_pInstance;
public :
	static CSingleton* getInstance()
	{
		return m_pInstance;
	}
};
