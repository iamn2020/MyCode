// 
// c++ ������ �ڹ��� final Ű����(�ֱ� ������ �ٸ�)�� ������ �� �Ǳ� ������ 
// Lazy Holder ����� ������ ���� �� �� �ʱ�ȭ ����� ����� �� ����.
// �׷��� ó������ �޸� ���� �Ҵ��� �Ͽ� ����ϸ� Multi Thread ȯ�濡�� Safe �ϴ�.
// ���μ��� ���� ���� ������� �ʰ� �Ǹ� �޸𸮰� ����Ǵ� ������ ����
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
