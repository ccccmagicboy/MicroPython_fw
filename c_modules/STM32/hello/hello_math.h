////////////////////////////////////////////////////////////////////////////////////////
// ����math����ĳ���   
enum { 
        CONSTANTS0, 
        CONSTANTS1,   
     };

typedef struct _math_obj_t
{
    mp_obj_base_t base;/*������Ա�Ǳ����*/
    uint16_t value1;//��Ա����value1
    uint16_t value2;//��Ա����value2
    uint16_t value3;//��Ա����value3
}math_obj_t;/*����math��Ľṹ��*/

const mp_obj_type_t hello_math_obj;

