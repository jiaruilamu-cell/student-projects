package com.yxq.toolbean;

import java.util.ArrayList;

import com.yxq.toolbean.MyTools;
import com.yxq.valuebeann.GoodsSingle;

public class ShopCar {
    private ArrayList buy_list =new ArrayList();
    public ArrayList getBuy_list(){
        return buy_list;
    }
    public void addItem(GoodsSingle single){
        if ( single!=null ){
            if ( buy_list.size() == 0 ){
                GoodsSingle temp = new GoodsSingle();
                temp.setName(single.getName());
                temp.setPrice(single.getPrice());
                temp.setNum(single.getNum());
                buy_list.add(temp);

            }
            else {
                int i=0;
                for (int i1 = 0; i1 < buy_list.size(); i1++) {
                    GoodsSingle temp = (GoodsSingle)buy_list.get(i1);
                    if ( temp.getName().equals(single.getName()) ){
                        temp.setNum(temp.getNum()+1);
                        break;
                    }

                }
                if ( i>buy_list.size()  ){
                    GoodsSingle temp=new GoodsSingle();
                    temp.setName(single.getName());
                    temp.setPrice(single.getPrice());
                    temp.setNum(single.getNum());
                    buy_list.add(temp);
                }
            }
        }
    }
    public  void  removeItem(String name){
        for (int i = 0; i < buy_list.size(); i++) {
            GoodsSingle temp = (GoodsSingle)buy_list.get(i);
            if ( temp.getName().equals(MyTools.toChinese(name)) ){
                if ( temp.getNum() >1 ){
                    temp.setNum(temp.getNum()-1);
                    break;
                }
                else if (temp.getNum() == 1){
                    buy_list.remove(i);
                }
            }
        }
    }
    public void clearCar(){
        buy_list.clear();
    }


}
