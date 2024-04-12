<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@taglib uri="/struts-tags" prefix="s" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login</title>
<s:head />
</head>

<body bgColor="lightGreen">
	<s:form action="Login">
		<s:textfield name="userName" label="User Name" placeholder="Default 'Sanjyot'"/>
		<s:password name="password" label="Password" />
		<s:textfield name="phoneNumber" label="Phone Number" placeholder="10 digit phone number"/>
		<s:textfield name="email" label="Email" type="email" />
		<s:submit value="Login" />
	</s:form>
</body>
</html>
