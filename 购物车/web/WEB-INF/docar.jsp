<%@ page import="java.util.ArrayList" %>
<%@ page import="com.yxq.toolbean.MyTools" %>
<%@ page import="com.yxq.valuebeann.GoodsSingle" %><%--
  Created by IntelliJ IDEA.
  User: HP
  Date: 2024/10/28
  Time: 21:36
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@page import="com.yxq.valuebeann.GoodsSingle" %>
<%@page import="com.yxq.toolbean.MyTools" %>
<jsp:useBean id="myCar" class="com.yxq.toolbean.ShopCar" scope="session">
<html>
<head>
    <title>Title</title>
</head>
<body>

</body>
</html>
<%

    String action= request.getParameter("action");
    if ( action==null )
        action=" ";
    if ( action.equals("buy")){
        ArrayList goods_list=(ArrayList)session.getAttribute("goods_list");
        int id= MyTools.strToInt(request.getParameter("id"));
        GoodsSingle single=(GoodsSingle)goods_list.get(id);
        myCar.addItem(single);
        response.sendRedirect("show.jsp");

    } else if ( action.equals("remove") ) {

        String name= request.getParameter("name");
        myCar.removeItem(name);
        response.sendRedirect("shopcar.jsp");


    } else if ( action.equals("clear") ) {
        myCar.clearCar();
        response.sendRedirect("shopcar.jsp");


    }
    else{
        response.sendRedirect("shop.jsp");

    }


%>
