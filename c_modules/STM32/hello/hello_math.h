// ���Ȱ�����Ҫ�Ķ���
#include "py/obj.h"
#include "py/runtime.h"
#include "py/builtin.h"

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

// ����math��Ĺ��캯��
STATIC mp_obj_t math_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args);
// ����math����ĺ���     
STATIC mp_obj_t math_add(mp_obj_t self_in, mp_obj_t data);
STATIC void math_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind);
// ����math���ﺯ��������macro
MP_DEFINE_CONST_FUN_OBJ_2(math_add_obj, math_add);
// ����math�������������ֵ��
STATIC const mp_rom_map_elem_t math_type_locals_table[] = {
    { MP_ROM_QSTR(MP_QSTR_add), MP_ROM_PTR(&math_add_obj) },/*python��¶��add�뺯�����ù���*/
    { MP_ROM_QSTR(MP_QSTR_C0), MP_ROM_INT(CONSTANTS0)}, /*python��¶��C0�볣��CONSTANTS0����*/
    { MP_ROM_QSTR(MP_QSTR_C1), MP_ROM_INT(CONSTANTS1)}, /*python��¶��C1�볣��CONSTANTS1����*/
};
// ����math����ֵ�macro
STATIC MP_DEFINE_CONST_DICT(math_type_locals, math_type_locals_table);
// ����math���ʵ��
const mp_obj_type_t hello_math_obj = {
    .base = { &mp_type_type },  /*������module��ͬ*/
    .name = MP_QSTR_math,       /*python��¶�������ﶨ��*/
    .print = math_print,        //print()ʱ���õĺ���
    .make_new = math_new,       //���캯��
    .locals_dict = (mp_obj_dict_t*)&math_type_locals,
};


