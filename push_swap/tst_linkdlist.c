#include "push_swap.h"

// int main() {
// t_list *head ;
//  int number =  43;
//  head = ft_lstnew(&number);
//  printf("%d",*(head -> data));
//  free(head);
// }

// void ft_tchek_nb(int *dgt,int size){

// 	int tchk = 0;
// 	int i = 0;
// 	int j = 1;
// 	while(i < size)
// 	{
// 		j = 1;
// 		while (j < size){
//         if(dgt[i] == dgt[i + j])
// 		{
// 			write(1,"Erore\n",7);
// 			break;
// 		}		
//          j++;
// 		}
// 		i++;
// 	}

// }
// int main(){
// 	int dgt[] = {1,3,4,3,5,7};
// 	int size = sizeof(dgt)/sizeof(dgt[0]);
// 	ft_tchek_nb(dgt , size );
// }
// void ft_tchek_nb(t_list *head) {
//     t_list *outer = head; // العقدة الأولى للتكرار الخارجي
//     t_list *inner;        // العقدة للتكرار الداخلي

//     while (outer != NULL) { // التكرار على جميع العقد
//         inner = outer->next; // البدء بالعقدة التالية
//         while (inner != NULL) {
//             if (outer->data == inner->data) { // التحقق من القيم المتطابقة
//                 write(1, "Error\n", 6);
//                 return; // الخروج إذا تم العثور على تطابق
//             }
//             inner = inner->next; // الانتقال للعقدة التالية
//         }
//         outer = outer->next; // الانتقال للعقدة الخارجية التالية
//     }
// }
// void ft_print(t_list *head) {
    
//     while (head != NULL) {
//         printf("%d\n", head->data);
//         head = head->next;
//     }
// }
// int main() {
//     // إنشاء قائمة مترابطة
//     t_list *head = NULL;

//     // إضافة القيم إلى القائمة
//     ft_lstadd_back(&head, ft_lstnew(1));
//     ft_lstadd_back(&head, ft_lstnew(3));
//     ft_lstadd_back(&head, ft_lstnew(4));
//     ft_lstadd_back(&head, ft_lstnew(3)); // مكررة
//     ft_lstadd_back(&head, ft_lstnew(5));
//     ft_lstadd_back(&head, ft_lstnew(7));

//     // التحقق من وجود تكرارات
//     ft_tchek_nb(head);
// 	ft_print(head);

//     return 0;
// }