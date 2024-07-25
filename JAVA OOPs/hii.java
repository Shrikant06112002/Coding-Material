package com.second;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.ServletException;
import java.io.IOException;

public class hii extends HttpServlet {
	public void service(HttpServletRequest req,HttpServletResponse res) throws IOException{
		String num1;
		int s = req.getParameterValues(num1);
	}
}
