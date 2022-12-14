
//ydurpcgnhocgxoei


using System.Net.Mail;

SmtpClient smtpClient = new SmtpClient("smtp.gmail.com", 587);

smtpClient.Credentials = new System.Net.NetworkCredential("elvin.azim01@gmail.com", "ydurpcgnhocgxoei");

smtpClient.DeliveryMethod = SmtpDeliveryMethod.Network;
smtpClient.EnableSsl = true;
MailMessage mail = new MailMessage();



//Setting From , To and CC
mail.From = new MailAddress("elvin.azim01@gmail.com", "MyWeb Site");
mail.To.Add(new MailAddress("elvin.azim01@gmail.com"));

smtpClient.Send(mail);