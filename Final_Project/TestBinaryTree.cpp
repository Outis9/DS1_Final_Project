#include "BinaryTree.h"		// ����������

int main()
{
	BinTreeNode<char> *p,*r;
	char pre[]={'A','B','D','E','G','H','C','F','I'}; // ��������
	char in[]={'D','B','G','E','H','A','C','F','I'};  // ��������
	int n = 9;						                  // ������
	BinaryTree<char> bt;
    char c = 'x', e;
	
	
	bt = CreateBinaryTree(pre, in, n);           // ���������
	cout << "���������" << endl;
	cout << "������:A,B,D,E,G,H,C,F,I������:D,B,G,E,H,A,C,F,I����Ķ�����:" << endl;
	DisplayBTWithTreeShape<char>(bt);
	

	system("PAUSE");

    while (c != '0')	{
        cout << endl << "1. ��������.";
        cout << endl << "2. ɾ��������.";
        cout << endl << "3. �������.";
        cout << endl << "4. �������.";
        cout << endl << "5. ��������Ľ����.";
        cout << endl << "6. ��������ĸ߶�.";
		cout << endl << "7. ��������Ҷ�ӽ����Ŀ.";
		cout << endl << "0. �˳�";
		cout << endl << "ѡ����(0~7):";
		cin >> c;
		switch (c) 	{
		    case '1':
            	cout << endl << "���뱻����Ԫ�ص�ֵ:";
			    cin >> e;
			    p = bt.Find(e);
			    if (p == NULL)
			    	cout << "�ý�㲻���ڣ�" << endl;
			    else {
            		cout << endl << "�������Ԫ�ص�ֵ:";
			    	cin >> e;
					bt.InsertLeftChild(p, e);	// ��������
			    }
			    break;
           	case '2':
            	cout << endl << "����ɾ������˫��Ԫ�ص�ֵ:";
			    cin >> e;
			    p = bt.Find(e);
			    if (p == NULL)
			    	cout << "�ý�㲻���ڣ�" << endl;
			    else 
					bt.DeleteRightChild(p);					
			    break;
	         case '3':
				cout << endl;
				bt.PreOrder(Write<char>);
				break;
	         case '4':
				cout << endl;
				bt.InOrder(Write<char>);
				break;
	         case '5':
				cout << endl;
				cout << "�������Ľ����Ϊ��" << bt.NodeCount() << endl;
				break;
	         case '6':
				cout << endl;
				cout << "�������ĸ߶�Ϊ��" << bt.Height() << endl;
				break;
			 case '7':
				 cout << endl;
				 r = bt.GetRoot();
				 cout << "��������Ҷ�ӽ����ĿΪ��" << bt.CountLeaf(r)<<endl;
		}
	}

	system("PAUSE");
	return 0;
}

