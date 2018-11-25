��# i n c l u d e   < i o s t r e a m >  
 u s i n g   n a m e s p a c e   s t d ;  
  
 c l a s s   N o d e   {  
 p u b l i c :  
 	 i n t   d a t a ;  
 	 N o d e   * n e x t ;  
  
 } ;  
 N o d e   * h e a d   =   N U L L ;   / /   H e a d   p o i n t e r   v a r i a b l e   t o   p o i n t   t o   t h e   n o d e s  
 c l a s s   S t a c k   {  
 p u b l i c :  
 	 v o i d   P u s h ( i n t   v a l 1 ) ;  
 	 v o i d   P o p ( ) ;  
 	 v o i d   D i s p l a y ( ) ;  
 } ;  
 v o i d   : : S t a c k : : P u s h ( i n t   v a l 1 )   {  
 	 N o d e   * t e m p   =   n e w   N o d e ;  
 	 t e m p - > d a t a   =   v a l 1 ;  
 	 t e m p - > n e x t   =   h e a d ;  
 	 h e a d   =   t e m p ;  
  
 }  
  
 v o i d   : : S t a c k : : P o p ( )   {  
 	 i f   ( h e a d   = =   N U L L )   {  
  
 	 	 c o u t   < <   " T h e   l i s t   i s   E m p t y "   < <   e n d l ;  
 	 }  
 	 e l s e   {  
 	 	 N o d e   * t e m p ;  
 	 	 t e m p   =   h e a d ;  
 	 	 h e a d   =   h e a d - > n e x t ;  
 	 	 c o u t   < <   " d e l e t e d "   < <   e n d s   < <   t e m p - > d a t a   < <   e n d l   < <   e n d l ;  
 	 	 f r e e ( t e m p ) ;  
 	 }  
 }  
 v o i d   : : S t a c k : : D i s p l a y ( )  
 {  
 	 N o d e   * t e m p ;  
 	 t e m p   =   h e a d ;  
 	 w h i l e   ( t e m p   ! =   N U L L )  
 	 {  
 	 	 c o u t   < <   e n d s   < <   t e m p - > d a t a   < <   e n d l ;  
 	 	 t e m p   =   t e m p - > n e x t ;  
 	 }  
  
 }  
 i n t   m a i n ( i n t   a r g c ,   c h a r   c o n s t   * a r g v [ ] )   {  
 	 S t a c k   o b j 1 ;  
  
 	 i n t   c h ,   n u m b ;  
 	 w h i l e   ( 1 )   {  
 	 	 c o u t   < <   " 1 .   T o   p u s h   t h e   o b j e c t   i n   t h e   s t a c k "   < <   e n d l ;  
 	 	 c o u t   < <   " 2 .   T o   p o p   t h e   o b j e c t   i n   t h e   s t a c k "   < <   e n d l ;  
 	 	 c o u t   < <   " 3 .   T o   D i s p l a y   t h e   o b j e c t   f r o m   t h e   s t a c k "   < <   e n d l ;  
 	 	 c o u t   < <   " 4 .   T o   E x i t   t h e   p r o g r a m "   < <   e n d l   < <   e n d l ;  
 	 	 c o u t   < <   " E n t e r   y o u r t   c h o i c e "   < <   e n d l ;  
 	 	 c i n   > >   c h ;  
 	 	 s w i t c h   ( c h )  
 	 	 {  
 	 	 c a s e   1 :  
 	 	 	 c o u t   < <   " E n t e r   t h e   N u m b e r   t o     p u s h "   < <   e n d l ;  
 	 	 	 c i n   > >   n u m b ;  
 	 	 	 o b j 1 . P u s h ( n u m b ) ;  
 	 	 	 b r e a k ;  
 	 	 c a s e   2 :  
 	 	 	 o b j 1 . P o p ( ) ;  
 	 	 	 b r e a k ;  
 	 	 c a s e   3 :  
 	 	 	 o b j 1 . D i s p l a y ( ) ;  
 	 	 	 b r e a k ;  
 	 	 c a s e   4 :  
 	 	 	 e x i t ( 0 ) ;  
 	 	 	 b r e a k ;  
 	 	 d e f a u l t :  
 	 	 	 c o u t   < <   " T h e   i n p u t   i s   i n a v a l i d "   < <   e n d l ;  
 	 	 	 b r e a k ;  
 	 	 }  
  
 	 }  
 	 r e t u r n   0 ;  
 }  
 
