<%@ page import="java.util.ArrayList" %>
<%@ page import="com.yxq.valuebeann.GoodsSingle" %><%--
  Created by IntelliJ IDEA.
  User: HP
  Date: 2024/10/25
  Time: 23:06
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@page import="com.yxq.valuebeann.GoodsSingle" %>
<%

    ArrayList goods_list= (ArrayList)session.getAttribute("goods_list");


%>
<table border="1" width="450" rules="none" cellspacing="0" cellpadding="0">
    <tr height="50"><td colspan="3" align="center">供应商品如下</td></tr>
    <tr align="center" height="30"bgcolor="#d3d3d3">
        <td>名称</td>
        <td>价格(元/斤)</td>
        <td>购买</td>
    </tr>
    <%

        if ( goods_list==null || goods_list.size()==0 ){%>
    <tr height="100" > <td colspan="3" align="center">没有商品可以显示！</td></tr>
<%

    }
        else {
        for (int i = 0; i < goods_list.size(); i++) {

            GoodsSingle single=(GoodsSingle)goods_list.get(i);
            %>
    <tr height="50" align="center">
        <td><%=single.getName() %></td>
        <td><%=single.getPrice() %></td>
        <td><a href="docar.jsp?action=buy&id<%=i%>">购买</a></td></tr>
    <%


        }}
    %>
    <tr height="50">
        <td align="center" colspan="3"><a href="showcar.jsp">查看购物车</a>

        </td>
    </tr>

</table>