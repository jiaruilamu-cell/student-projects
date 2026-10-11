<%@ page import="java.util.ArrayList" %>
<%@ page import="com.yxq.valuebeann.GoodsSingle" %>

<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@page import="com.yxq.valuebeann.GoodsSingle" %>

<%!
    static ArrayList goods_list=new ArrayList();
    static {
        String [] names={"苹果","香蕉","梨","橘子"};
        float[] prices={2.8f,3.1f,2.5f,2.3f};
        for (int i = 0; i < 4; i++) {
            GoodsSingle single= new GoodsSingle();
            single.setName(names[i]);
            single.setPrice(prices[i]);
            single.setNum(1);
            goods_list.add(i,single);
        }
    }

%>
<%
    session.setAttribute("goods_list",goods_list);
    response.sendRedirect("show.jsp");




%>
