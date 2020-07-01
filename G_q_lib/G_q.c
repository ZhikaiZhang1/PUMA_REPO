/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: G_q.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 30-Jun-2020 16:12:35
 */

/* Include Files */
#include "G_q.h"
#include "G_q_data.h"
#include "G_q_initialize.h"
#include "exp.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * G_Q
 *     G_Q = G_Q(G,THETA2,THETA3,THETA4,THETA5)
 * Arguments    : double g
 *                double theta2
 *                double theta3
 *                double theta4
 *                double theta5
 *                creal_T b_G_q[6]
 * Return Type  : void
 */
void G_q(double g, double theta2, double theta3, double theta4, double theta5,
         creal_T b_G_q[6])
{
  creal_T t299;
  creal_T t298;
  creal_T t293;
  creal_T t292;
  creal_T t291;
  creal_T t290;
  creal_T t287;
  creal_T t286;
  creal_T t281;
  creal_T t280;
  creal_T t277;
  creal_T t276;
  creal_T t273;
  creal_T t272;
  creal_T t269;
  creal_T t268;
  creal_T t263;
  creal_T t262;
  creal_T t259;
  creal_T t258;
  creal_T t251;
  creal_T t250;
  creal_T t249;
  creal_T t248;
  creal_T t245;
  creal_T t244;
  creal_T t239;
  creal_T t238;
  creal_T t237;
  creal_T t236;
  creal_T t233;
  creal_T t232;
  creal_T t227;
  creal_T t226;
  creal_T t223;
  creal_T t222;
  creal_T t217;
  creal_T t216;
  creal_T t213;
  creal_T t212;
  creal_T t205;
  creal_T t204;
  creal_T t203;
  creal_T t202;
  creal_T t199;
  creal_T t198;
  creal_T t193;
  creal_T t192;
  creal_T t189;
  creal_T t188;
  creal_T t181;
  creal_T t180;
  creal_T t179;
  creal_T t178;
  creal_T t175;
  creal_T t174;
  creal_T t171;
  creal_T t170;
  creal_T t167;
  creal_T t166;
  creal_T t161;
  creal_T t160;
  creal_T t157;
  creal_T t156;
  creal_T t149;
  creal_T t148;
  creal_T t147;
  creal_T t146;
  creal_T t143;
  creal_T t142;
  creal_T t139;
  creal_T t138;
  creal_T t133;
  creal_T t132;
  creal_T t127;
  creal_T t126;
  creal_T t119;
  creal_T t118;
  creal_T t117;
  creal_T t116;
  creal_T t111;
  creal_T t110;
  creal_T t105;
  creal_T t104;
  creal_T t97;
  creal_T t96;
  creal_T t95;
  creal_T t94;
  creal_T t83;
  creal_T t82;
  creal_T t79;
  creal_T t78;
  creal_T t77;
  creal_T t76;
  creal_T t71;
  creal_T t70;
  creal_T t67;
  creal_T t66;
  creal_T t63;
  creal_T t62;
  creal_T t61;
  creal_T t60;
  creal_T t57;
  creal_T t56;
  creal_T t50;
  creal_T t49;
  creal_T t46;
  creal_T t45;
  creal_T t44;
  creal_T t43;
  creal_T t40;
  creal_T t39;
  creal_T t34;
  creal_T t33;
  creal_T t30;
  creal_T t29;
  creal_T t26;
  creal_T t25;
  creal_T t24;
  creal_T t23;
  creal_T t15;
  creal_T t14;
  creal_T t11;
  creal_T t10;
  creal_T t6;
  creal_T t5;
  creal_T t4;
  creal_T t3;
  creal_T t297;
  creal_T t296;
  creal_T t295;
  creal_T t294;
  creal_T t289;
  creal_T t288;
  creal_T t283;
  creal_T t282;
  creal_T t275;
  creal_T t274;
  creal_T t271;
  creal_T t270;
  creal_T t261;
  creal_T t260;
  creal_T t257;
  creal_T t256;
  creal_T t253;
  creal_T t252;
  creal_T t247;
  creal_T t246;
  creal_T t241;
  creal_T t240;
  creal_T t235;
  creal_T t234;
  creal_T t225;
  creal_T t224;
  creal_T t221;
  creal_T t220;
  creal_T t215;
  creal_T t214;
  creal_T t211;
  creal_T t210;
  creal_T t207;
  creal_T t206;
  creal_T t201;
  creal_T t200;
  creal_T t191;
  creal_T t190;
  creal_T t187;
  creal_T t186;
  creal_T t183;
  creal_T t182;
  creal_T t177;
  creal_T t176;
  creal_T t169;
  creal_T t168;
  creal_T t165;
  creal_T t164;
  creal_T t163;
  creal_T t162;
  creal_T t155;
  creal_T t154;
  creal_T t151;
  creal_T t150;
  creal_T t145;
  creal_T t144;
  creal_T t141;
  creal_T t140;
  creal_T t137;
  creal_T t136;
  creal_T t131;
  creal_T t130;
  creal_T t129;
  creal_T t128;
  creal_T t121;
  creal_T t120;
  creal_T t115;
  creal_T t114;
  creal_T t109;
  creal_T t108;
  creal_T t107;
  creal_T t106;
  creal_T t99;
  creal_T t98;
  creal_T t93;
  creal_T t92;
  creal_T t85;
  creal_T t84;
  creal_T t81;
  creal_T t80;
  creal_T t75;
  creal_T t74;
  creal_T t73;
  creal_T t72;
  creal_T t69;
  creal_T t68;
  creal_T t65;
  creal_T t64;
  creal_T t52;
  creal_T t51;
  creal_T t48;
  creal_T t47;
  creal_T t38;
  creal_T t37;
  creal_T t36;
  creal_T t35;
  creal_T t32;
  creal_T t31;
  creal_T t28;
  creal_T t27;
  creal_T t17;
  creal_T t16;
  creal_T t13;
  creal_T t12;
  creal_T t9;
  creal_T t8;
  creal_T t285;
  creal_T t284;
  creal_T t279;
  creal_T t278;
  creal_T t255;
  creal_T t254;
  creal_T t243;
  creal_T t242;
  creal_T t231;
  creal_T t230;
  creal_T t229;
  creal_T t228;
  creal_T t209;
  creal_T t208;
  creal_T t197;
  creal_T t196;
  creal_T t185;
  creal_T t184;
  creal_T t173;
  creal_T t172;
  creal_T t159;
  creal_T t158;
  creal_T t153;
  creal_T t152;
  creal_T t135;
  creal_T t134;
  creal_T t123;
  creal_T t122;
  creal_T t103;
  creal_T t102;
  creal_T t101;
  creal_T t100;
  creal_T t87;
  creal_T t86;
  creal_T t59;
  creal_T t58;
  creal_T t42;
  creal_T t41;
  creal_T t22;
  creal_T t21;
  creal_T t20;
  creal_T t19;
  creal_T t267;
  creal_T t266;
  creal_T t265;
  creal_T t264;
  creal_T t219;
  creal_T t218;
  creal_T t195;
  creal_T t194;
  creal_T t125;
  creal_T t124;
  creal_T t113;
  creal_T t112;
  creal_T t55;
  creal_T t54;
  double t33_re;
  double t33_im;
  double t34_re;
  double t34_im;
  double t35_re;
  double t35_im;
  double t37_re;
  double t37_im;
  double t39_re;
  double t39_im;
  double t10_re;
  double t10_im;
  double t12_re;
  double t12_im;
  double t13_re;
  double t13_im;
  double t16_re;
  double t16_im;
  double t19_re;
  double t19_im;
  double t20_re;
  double t20_im;
  double b_t10_re;
  double t23_re;
  double t54_re;
  double t54_im;
  double t8_im;
  double t85_im;
  double t3_im;
  double t19_re_tmp;
  double t19_im_tmp;
  double t8_re;
  double t41_re;
  double t41_im;
  double t43_re;
  double t43_im;
  double b_t54_re;
  double b_t54_im;
  double t55_re;
  double t55_im;
  double t70_re;
  double t70_im;
  double t72_re;
  double t74_re;
  double t74_im;
  double t76_re;
  double t58_im;
  double t60_re;
  if (isInitialized_G_q == false) {
    G_q_initialize();
  }

  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     24-May-2020 14:27:08 */
  t299.re = theta2 * 0.0;
  t299.im = theta2;
  t298.re = -t299.re;
  t298.im = -theta2;
  t293.re = t299.re;
  t293.im = theta2;
  t292.re = -t299.re;
  t292.im = -theta2;
  t291.re = t299.re;
  t291.im = theta2;
  t290.re = -t299.re;
  t290.im = -theta2;
  t287.re = t299.re;
  t287.im = theta2;
  t286.re = -t299.re;
  t286.im = -theta2;
  t281.re = t299.re;
  t281.im = theta2;
  t280.re = -t299.re;
  t280.im = -theta2;
  t277.re = t299.re;
  t277.im = theta2;
  t276.re = -t299.re;
  t276.im = -theta2;
  t273.re = t299.re;
  t273.im = theta2;
  t272.re = -t299.re;
  t272.im = -theta2;
  t269.re = t299.re;
  t269.im = theta2;
  t268.re = -t299.re;
  t268.im = -theta2;
  t263.re = t299.re;
  t263.im = theta2;
  t262.re = -t299.re;
  t262.im = -theta2;
  t259.re = t299.re;
  t259.im = theta2;
  t258.re = -t299.re;
  t258.im = -theta2;
  t251.re = t299.re;
  t251.im = theta2;
  t250.re = -t299.re;
  t250.im = -theta2;
  t249.re = t299.re;
  t249.im = theta2;
  t248.re = -t299.re;
  t248.im = -theta2;
  t245.re = t299.re;
  t245.im = theta2;
  t244.re = -t299.re;
  t244.im = -theta2;
  t239.re = t299.re;
  t239.im = theta2;
  t238.re = -t299.re;
  t238.im = -theta2;
  t237.re = t299.re;
  t237.im = theta2;
  t236.re = -t299.re;
  t236.im = -theta2;
  t233.re = t299.re;
  t233.im = theta2;
  t232.re = -t299.re;
  t232.im = -theta2;
  t227.re = t299.re;
  t227.im = theta2;
  t226.re = -t299.re;
  t226.im = -theta2;
  t223.re = t299.re;
  t223.im = theta2;
  t222.re = -t299.re;
  t222.im = -theta2;
  t217.re = t299.re;
  t217.im = theta2;
  t216.re = -t299.re;
  t216.im = -theta2;
  t213.re = t299.re;
  t213.im = theta2;
  t212.re = -t299.re;
  t212.im = -theta2;
  t205.re = t299.re;
  t205.im = theta2;
  t204.re = -t299.re;
  t204.im = -theta2;
  t203.re = t299.re;
  t203.im = theta2;
  t202.re = -t299.re;
  t202.im = -theta2;
  t199.re = t299.re;
  t199.im = theta2;
  t198.re = -t299.re;
  t198.im = -theta2;
  t193.re = t299.re;
  t193.im = theta2;
  t192.re = -t299.re;
  t192.im = -theta2;
  t189.re = t299.re;
  t189.im = theta2;
  t188.re = -t299.re;
  t188.im = -theta2;
  t181.re = t299.re;
  t181.im = theta2;
  t180.re = -t299.re;
  t180.im = -theta2;
  t179.re = t299.re;
  t179.im = theta2;
  t178.re = -t299.re;
  t178.im = -theta2;
  t175.re = t299.re;
  t175.im = theta2;
  t174.re = -t299.re;
  t174.im = -theta2;
  t171.re = t299.re;
  t171.im = theta2;
  t170.re = -t299.re;
  t170.im = -theta2;
  t167.re = t299.re;
  t167.im = theta2;
  t166.re = -t299.re;
  t166.im = -theta2;
  t161.re = t299.re;
  t161.im = theta2;
  t160.re = -t299.re;
  t160.im = -theta2;
  t157.re = t299.re;
  t157.im = theta2;
  t156.re = -t299.re;
  t156.im = -theta2;
  t149.re = t299.re;
  t149.im = theta2;
  t148.re = -t299.re;
  t148.im = -theta2;
  t147.re = t299.re;
  t147.im = theta2;
  t146.re = -t299.re;
  t146.im = -theta2;
  t143.re = t299.re;
  t143.im = theta2;
  t142.re = -t299.re;
  t142.im = -theta2;
  t139.re = t299.re;
  t139.im = theta2;
  t138.re = -t299.re;
  t138.im = -theta2;
  t133.re = t299.re;
  t133.im = theta2;
  t132.re = -t299.re;
  t132.im = -theta2;
  t127.re = t299.re;
  t127.im = theta2;
  t126.re = -t299.re;
  t126.im = -theta2;
  t119.re = t299.re;
  t119.im = theta2;
  t118.re = -t299.re;
  t118.im = -theta2;
  t117.re = t299.re;
  t117.im = theta2;
  t116.re = -t299.re;
  t116.im = -theta2;
  t111.re = t299.re;
  t111.im = theta2;
  t110.re = -t299.re;
  t110.im = -theta2;
  t105.re = t299.re;
  t105.im = theta2;
  t104.re = -t299.re;
  t104.im = -theta2;
  t97.re = t299.re;
  t97.im = theta2;
  t96.re = -t299.re;
  t96.im = -theta2;
  t95.re = t299.re;
  t95.im = theta2;
  t94.re = -t299.re;
  t94.im = -theta2;
  t83.re = t299.re;
  t83.im = theta2;
  t82.re = -t299.re;
  t82.im = -theta2;
  t79.re = t299.re;
  t79.im = theta2;
  t78.re = -t299.re;
  t78.im = -theta2;
  t77.re = t299.re;
  t77.im = theta2;
  t76.re = -t299.re;
  t76.im = -theta2;
  t71.re = t299.re;
  t71.im = theta2;
  t70.re = -t299.re;
  t70.im = -theta2;
  t67.re = t299.re;
  t67.im = theta2;
  t66.re = -t299.re;
  t66.im = -theta2;
  t63.re = t299.re;
  t63.im = theta2;
  t62.re = -t299.re;
  t62.im = -theta2;
  t61.re = t299.re;
  t61.im = theta2;
  t60.re = -t299.re;
  t60.im = -theta2;
  t57.re = t299.re;
  t57.im = theta2;
  t56.re = -t299.re;
  t56.im = -theta2;
  t50.re = t299.re;
  t50.im = theta2;
  t49.re = -t299.re;
  t49.im = -theta2;
  t46.re = t299.re;
  t46.im = theta2;
  t45.re = -t299.re;
  t45.im = -theta2;
  t44.re = t299.re;
  t44.im = theta2;
  t43.re = -t299.re;
  t43.im = -theta2;
  t40.re = t299.re;
  t40.im = theta2;
  t39.re = -t299.re;
  t39.im = -theta2;
  t34.re = t299.re;
  t34.im = theta2;
  t33.re = -t299.re;
  t33.im = -theta2;
  t30.re = t299.re;
  t30.im = theta2;
  t29.re = -t299.re;
  t29.im = -theta2;
  t26.re = t299.re;
  t26.im = theta2;
  t25.re = -t299.re;
  t25.im = -theta2;
  t24.re = t299.re;
  t24.im = theta2;
  t23.re = -t299.re;
  t23.im = -theta2;
  t15.re = t299.re;
  t15.im = theta2;
  t14.re = -t299.re;
  t14.im = -theta2;
  t11.re = t299.re;
  t11.im = theta2;
  t10.re = -t299.re;
  t10.im = -theta2;
  t6.re = t299.re;
  t6.im = theta2;
  t5.re = -t299.re;
  t5.im = -theta2;
  t4.re = t299.re;
  t4.im = theta2;
  t3.re = -t299.re;
  t3.im = -theta2;
  b_exp(&t3);
  t297.re = theta3 * 0.0;
  t297.im = theta3;
  t296.re = -t297.re;
  t296.im = -theta3;
  t295.re = t297.re;
  t295.im = theta3;
  t294.re = -t297.re;
  t294.im = -theta3;
  t289.re = t297.re;
  t289.im = theta3;
  t288.re = -t297.re;
  t288.im = -theta3;
  t283.re = t297.re;
  t283.im = theta3;
  t282.re = -t297.re;
  t282.im = -theta3;
  t275.re = t297.re;
  t275.im = theta3;
  t274.re = -t297.re;
  t274.im = -theta3;
  t271.re = t297.re;
  t271.im = theta3;
  t270.re = -t297.re;
  t270.im = -theta3;
  t261.re = t297.re;
  t261.im = theta3;
  t260.re = -t297.re;
  t260.im = -theta3;
  t257.re = t297.re;
  t257.im = theta3;
  t256.re = -t297.re;
  t256.im = -theta3;
  t253.re = t297.re;
  t253.im = theta3;
  t252.re = -t297.re;
  t252.im = -theta3;
  t247.re = t297.re;
  t247.im = theta3;
  t246.re = -t297.re;
  t246.im = -theta3;
  t241.re = t297.re;
  t241.im = theta3;
  t240.re = -t297.re;
  t240.im = -theta3;
  t235.re = t297.re;
  t235.im = theta3;
  t234.re = -t297.re;
  t234.im = -theta3;
  t225.re = t297.re;
  t225.im = theta3;
  t224.re = -t297.re;
  t224.im = -theta3;
  t221.re = t297.re;
  t221.im = theta3;
  t220.re = -t297.re;
  t220.im = -theta3;
  t215.re = t297.re;
  t215.im = theta3;
  t214.re = -t297.re;
  t214.im = -theta3;
  t211.re = t297.re;
  t211.im = theta3;
  t210.re = -t297.re;
  t210.im = -theta3;
  t207.re = t297.re;
  t207.im = theta3;
  t206.re = -t297.re;
  t206.im = -theta3;
  t201.re = t297.re;
  t201.im = theta3;
  t200.re = -t297.re;
  t200.im = -theta3;
  t191.re = t297.re;
  t191.im = theta3;
  t190.re = -t297.re;
  t190.im = -theta3;
  t187.re = t297.re;
  t187.im = theta3;
  t186.re = -t297.re;
  t186.im = -theta3;
  t183.re = t297.re;
  t183.im = theta3;
  t182.re = -t297.re;
  t182.im = -theta3;
  t177.re = t297.re;
  t177.im = theta3;
  t176.re = -t297.re;
  t176.im = -theta3;
  t169.re = t297.re;
  t169.im = theta3;
  t168.re = -t297.re;
  t168.im = -theta3;
  t165.re = t297.re;
  t165.im = theta3;
  t164.re = -t297.re;
  t164.im = -theta3;
  t163.re = t297.re;
  t163.im = theta3;
  t162.re = -t297.re;
  t162.im = -theta3;
  t155.re = t297.re;
  t155.im = theta3;
  t154.re = -t297.re;
  t154.im = -theta3;
  t151.re = t297.re;
  t151.im = theta3;
  t150.re = -t297.re;
  t150.im = -theta3;
  t145.re = t297.re;
  t145.im = theta3;
  t144.re = -t297.re;
  t144.im = -theta3;
  t141.re = t297.re;
  t141.im = theta3;
  t140.re = -t297.re;
  t140.im = -theta3;
  t137.re = t297.re;
  t137.im = theta3;
  t136.re = -t297.re;
  t136.im = -theta3;
  t131.re = t297.re;
  t131.im = theta3;
  t130.re = -t297.re;
  t130.im = -theta3;
  t129.re = t297.re;
  t129.im = theta3;
  t128.re = -t297.re;
  t128.im = -theta3;
  t121.re = t297.re;
  t121.im = theta3;
  t120.re = -t297.re;
  t120.im = -theta3;
  t115.re = t297.re;
  t115.im = theta3;
  t114.re = -t297.re;
  t114.im = -theta3;
  t109.re = t297.re;
  t109.im = theta3;
  t108.re = -t297.re;
  t108.im = -theta3;
  t107.re = t297.re;
  t107.im = theta3;
  t106.re = -t297.re;
  t106.im = -theta3;
  t99.re = t297.re;
  t99.im = theta3;
  t98.re = -t297.re;
  t98.im = -theta3;
  t93.re = t297.re;
  t93.im = theta3;
  t92.re = -t297.re;
  t92.im = -theta3;
  t85.re = t297.re;
  t85.im = theta3;
  t84.re = -t297.re;
  t84.im = -theta3;
  t81.re = t297.re;
  t81.im = theta3;
  t80.re = -t297.re;
  t80.im = -theta3;
  t75.re = t297.re;
  t75.im = theta3;
  t74.re = -t297.re;
  t74.im = -theta3;
  t73.re = t297.re;
  t73.im = theta3;
  t72.re = -t297.re;
  t72.im = -theta3;
  t69.re = t297.re;
  t69.im = theta3;
  t68.re = -t297.re;
  t68.im = -theta3;
  t65.re = t297.re;
  t65.im = theta3;
  t64.re = -t297.re;
  t64.im = -theta3;
  t52.re = t297.re;
  t52.im = theta3;
  t51.re = -t297.re;
  t51.im = -theta3;
  t48.re = t297.re;
  t48.im = theta3;
  t47.re = -t297.re;
  t47.im = -theta3;
  t38.re = t297.re;
  t38.im = theta3;
  t37.re = -t297.re;
  t37.im = -theta3;
  t36.re = t297.re;
  t36.im = theta3;
  t35.re = -t297.re;
  t35.im = -theta3;
  t32.re = t297.re;
  t32.im = theta3;
  t31.re = -t297.re;
  t31.im = -theta3;
  t28.re = t297.re;
  t28.im = theta3;
  t27.re = -t297.re;
  t27.im = -theta3;
  t17.re = t297.re;
  t17.im = theta3;
  t16.re = -t297.re;
  t16.im = -theta3;
  t13.re = t297.re;
  t13.im = theta3;
  t12.re = -t297.re;
  t12.im = -theta3;
  t9.re = t297.re;
  t9.im = theta3;
  t8.re = -t297.re;
  t8.im = -theta3;
  b_exp(&t8);
  t285.re = theta4 * 0.0;
  t285.im = theta4;
  t284.re = -t285.re;
  t284.im = -theta4;
  t279.re = t285.re;
  t279.im = theta4;
  t278.re = -t285.re;
  t278.im = -theta4;
  t255.re = t285.re;
  t255.im = theta4;
  t254.re = -t285.re;
  t254.im = -theta4;
  t243.re = t285.re;
  t243.im = theta4;
  t242.re = -t285.re;
  t242.im = -theta4;
  t231.re = t285.re;
  t231.im = theta4;
  t230.re = -t285.re;
  t230.im = -theta4;
  t229.re = t285.re;
  t229.im = theta4;
  t228.re = -t285.re;
  t228.im = -theta4;
  t209.re = t285.re;
  t209.im = theta4;
  t208.re = -t285.re;
  t208.im = -theta4;
  t197.re = t285.re;
  t197.im = theta4;
  t196.re = -t285.re;
  t196.im = -theta4;
  t185.re = t285.re;
  t185.im = theta4;
  t184.re = -t285.re;
  t184.im = -theta4;
  t173.re = t285.re;
  t173.im = theta4;
  t172.re = -t285.re;
  t172.im = -theta4;
  t159.re = t285.re;
  t159.im = theta4;
  t158.re = -t285.re;
  t158.im = -theta4;
  t153.re = t285.re;
  t153.im = theta4;
  t152.re = -t285.re;
  t152.im = -theta4;
  t135.re = t285.re;
  t135.im = theta4;
  t134.re = -t285.re;
  t134.im = -theta4;
  t123.re = t285.re;
  t123.im = theta4;
  t122.re = -t285.re;
  t122.im = -theta4;
  t103.re = t285.re;
  t103.im = theta4;
  t102.re = -t285.re;
  t102.im = -theta4;
  t101.re = t285.re;
  t101.im = theta4;
  t100.re = -t285.re;
  t100.im = -theta4;
  t87.re = t285.re;
  t87.im = theta4;
  t86.re = -t285.re;
  t86.im = -theta4;
  t59.re = t285.re;
  t59.im = theta4;
  t58.re = -t285.re;
  t58.im = -theta4;
  t42.re = t285.re;
  t42.im = theta4;
  t41.re = -t285.re;
  t41.im = -theta4;
  t22.re = t285.re;
  t22.im = theta4;
  t21.re = -t285.re;
  t21.im = -theta4;
  t20.re = t285.re;
  t20.im = theta4;
  t19.re = -t285.re;
  t19.im = -theta4;
  b_exp(&t19);
  t267.re = theta5 * 0.0;
  t267.im = theta5;
  t266.re = -t267.re;
  t266.im = -theta5;
  t265.re = t267.re;
  t265.im = theta5;
  t264.re = -t267.re;
  t264.im = -theta5;
  t219.re = t267.re;
  t219.im = theta5;
  t218.re = -t267.re;
  t218.im = -theta5;
  t195.re = t267.re;
  t195.im = theta5;
  t194.re = -t267.re;
  t194.im = -theta5;
  t125.re = t267.re;
  t125.im = theta5;
  t124.re = -t267.re;
  t124.im = -theta5;
  t113.re = t267.re;
  t113.im = theta5;
  t112.re = -t267.re;
  t112.im = -theta5;
  t55.re = t267.re;
  t55.im = theta5;
  t54.re = -t267.re;
  t54.im = -theta5;
  b_exp(&t54);
  b_exp(&t87);
  b_exp(&t83);
  b_exp(&t85);
  b_exp(&t55);
  b_exp(&t33);
  b_exp(&t34);
  b_exp(&t35);
  b_exp(&t36);
  b_exp(&t37);
  b_exp(&t38);
  b_exp(&t39);
  b_exp(&t40);
  b_exp(&t10);
  b_exp(&t11);
  b_exp(&t12);
  b_exp(&t13);
  b_exp(&t14);
  b_exp(&t15);
  b_exp(&t16);
  b_exp(&t17);
  b_exp(&t20);
  b_exp(&t21);
  b_exp(&t22);
  b_exp(&t23);
  b_exp(&t24);
  b_exp(&t27);
  b_exp(&t28);
  b_exp(&t25);
  b_exp(&t26);
  b_exp(&t31);
  b_exp(&t32);
  b_exp(&t29);
  b_exp(&t30);
  b_exp(&t9);
  b_exp(&t5);
  b_exp(&t6);
  b_exp(&t4);
  b_exp(&t41);
  b_exp(&t42);
  b_exp(&t43);
  b_exp(&t44);
  b_exp(&t47);
  b_exp(&t48);
  b_exp(&t45);
  b_exp(&t46);
  b_exp(&t51);
  b_exp(&t52);
  b_exp(&t49);
  b_exp(&t50);
  b_exp(&t56);
  b_exp(&t57);
  b_exp(&t70);
  b_exp(&t71);
  b_exp(&t72);
  b_exp(&t73);
  b_exp(&t74);
  b_exp(&t75);
  b_exp(&t76);
  b_exp(&t77);
  b_exp(&t58);
  b_exp(&t59);
  b_exp(&t60);
  b_exp(&t61);
  b_exp(&t64);
  b_exp(&t65);
  b_exp(&t62);
  b_exp(&t63);
  b_exp(&t68);
  b_exp(&t69);
  b_exp(&t66);
  b_exp(&t67);
  b_exp(&t78);
  b_exp(&t79);
  b_exp(&t80);
  b_exp(&t81);
  b_exp(&t82);
  b_exp(&t84);
  b_exp(&t86);
  b_exp(&t154);
  b_exp(&t155);
  b_exp(&t156);
  b_exp(&t157);
  b_exp(&t112);
  b_exp(&t113);
  b_exp(&t98);
  b_exp(&t99);
  b_exp(&t96);
  b_exp(&t97);
  b_exp(&t92);
  b_exp(&t93);
  b_exp(&t94);
  b_exp(&t95);
  b_exp(&t100);
  b_exp(&t101);
  b_exp(&t104);
  b_exp(&t105);
  b_exp(&t106);
  b_exp(&t107);
  b_exp(&t108);
  b_exp(&t109);
  b_exp(&t110);
  b_exp(&t111);
  b_exp(&t102);
  b_exp(&t103);
  b_exp(&t124);
  b_exp(&t125);
  b_exp(&t136);
  b_exp(&t137);
  b_exp(&t138);
  b_exp(&t139);
  b_exp(&t152);
  b_exp(&t153);
  b_exp(&t150);
  b_exp(&t151);
  b_exp(&t148);
  b_exp(&t149);
  b_exp(&t144);
  b_exp(&t145);
  b_exp(&t146);
  b_exp(&t147);
  b_exp(&t134);
  b_exp(&t135);
  b_exp(&t126);
  b_exp(&t127);
  b_exp(&t128);
  b_exp(&t129);
  b_exp(&t130);
  b_exp(&t131);
  b_exp(&t132);
  b_exp(&t133);
  b_exp(&t140);
  b_exp(&t141);
  b_exp(&t142);
  b_exp(&t143);
  b_exp(&t168);
  b_exp(&t169);
  b_exp(&t170);
  b_exp(&t171);
  b_exp(&t120);
  b_exp(&t121);
  b_exp(&t118);
  b_exp(&t119);
  b_exp(&t114);
  b_exp(&t115);
  b_exp(&t116);
  b_exp(&t117);
  b_exp(&t122);
  b_exp(&t123);
  b_exp(&t160);
  b_exp(&t161);
  b_exp(&t162);
  b_exp(&t163);
  b_exp(&t164);
  b_exp(&t165);
  b_exp(&t166);
  b_exp(&t167);
  b_exp(&t158);
  b_exp(&t159);
  b_exp(&t194);
  b_exp(&t195);
  b_exp(&t172);
  b_exp(&t173);
  b_exp(&t174);
  b_exp(&t175);
  b_exp(&t182);
  b_exp(&t183);
  b_exp(&t180);
  b_exp(&t181);
  b_exp(&t176);
  b_exp(&t177);
  b_exp(&t178);
  b_exp(&t179);
  b_exp(&t186);
  b_exp(&t187);
  b_exp(&t188);
  b_exp(&t189);
  b_exp(&t190);
  b_exp(&t191);
  b_exp(&t192);
  b_exp(&t193);
  b_exp(&t184);
  b_exp(&t185);
  b_exp(&t196);
  b_exp(&t197);
  b_exp(&t198);
  b_exp(&t199);
  b_exp(&t206);
  b_exp(&t207);
  b_exp(&t204);
  b_exp(&t205);
  b_exp(&t200);
  b_exp(&t201);
  b_exp(&t202);
  b_exp(&t203);
  b_exp(&t210);
  b_exp(&t211);
  b_exp(&t212);
  b_exp(&t213);
  b_exp(&t214);
  b_exp(&t215);
  b_exp(&t216);
  b_exp(&t217);
  b_exp(&t208);
  b_exp(&t209);
  b_exp(&t230);
  b_exp(&t231);
  b_exp(&t232);
  b_exp(&t233);
  b_exp(&t240);
  b_exp(&t241);
  b_exp(&t238);
  b_exp(&t239);
  b_exp(&t234);
  b_exp(&t235);
  b_exp(&t236);
  b_exp(&t237);
  b_exp(&t228);
  b_exp(&t229);
  b_exp(&t220);
  b_exp(&t221);
  b_exp(&t222);
  b_exp(&t223);
  b_exp(&t224);
  b_exp(&t225);
  b_exp(&t226);
  b_exp(&t227);
  b_exp(&t218);
  b_exp(&t219);
  b_exp(&t264);
  b_exp(&t265);
  b_exp(&t242);
  b_exp(&t243);
  b_exp(&t244);
  b_exp(&t245);
  b_exp(&t252);
  b_exp(&t253);
  b_exp(&t250);
  b_exp(&t251);
  b_exp(&t246);
  b_exp(&t247);
  b_exp(&t248);
  b_exp(&t249);
  b_exp(&t256);
  b_exp(&t257);
  b_exp(&t258);
  b_exp(&t259);
  b_exp(&t260);
  b_exp(&t261);
  b_exp(&t262);
  b_exp(&t263);
  b_exp(&t254);
  b_exp(&t255);
  b_exp(&t266);
  b_exp(&t267);
  b_exp(&t268);
  b_exp(&t269);
  b_exp(&t280);
  b_exp(&t281);
  b_exp(&t282);
  b_exp(&t283);
  b_exp(&t284);
  b_exp(&t285);
  b_exp(&t286);
  b_exp(&t287);
  b_exp(&t294);
  b_exp(&t295);
  b_exp(&t292);
  b_exp(&t293);
  b_exp(&t288);
  b_exp(&t289);
  b_exp(&t290);
  b_exp(&t291);
  b_exp(&t278);
  b_exp(&t279);
  b_exp(&t270);
  b_exp(&t271);
  b_exp(&t272);
  b_exp(&t273);
  b_exp(&t274);
  b_exp(&t275);
  b_exp(&t276);
  b_exp(&t277);
  b_exp(&t296);
  b_exp(&t297);
  b_exp(&t298);
  b_exp(&t299);
  b_G_q[0].re = 0.0;
  b_G_q[0].im = 0.0;
  if (t33.im == 0.0) {
    t33_re = t33.re / 2.0;
    t33_im = 0.0;
  } else if (t33.re == 0.0) {
    t33_re = 0.0;
    t33_im = t33.im / 2.0;
  } else {
    t33_re = t33.re / 2.0;
    t33_im = t33.im / 2.0;
  }

  if (t34.im == 0.0) {
    t34_re = t34.re / 2.0;
    t34_im = 0.0;
  } else if (t34.re == 0.0) {
    t34_re = 0.0;
    t34_im = t34.im / 2.0;
  } else {
    t34_re = t34.re / 2.0;
    t34_im = t34.im / 2.0;
  }

  t33_re += t34_re;
  t33_im += t34_im;
  t35_re = (t35.re * 0.0 - t35.im * 0.5) - (t36.re * 0.0 - t36.im * 0.5);
  t35_im = (t35.re * 0.5 + t35.im * 0.0) - (t36.re * 0.5 + t36.im * 0.0);
  if (t37.im == 0.0) {
    t37_re = t37.re / 2.0;
    t37_im = 0.0;
  } else if (t37.re == 0.0) {
    t37_re = 0.0;
    t37_im = t37.im / 2.0;
  } else {
    t37_re = t37.re / 2.0;
    t37_im = t37.im / 2.0;
  }

  if (t38.im == 0.0) {
    t34_re = t38.re / 2.0;
    t34_im = 0.0;
  } else if (t38.re == 0.0) {
    t34_re = 0.0;
    t34_im = t38.im / 2.0;
  } else {
    t34_re = t38.re / 2.0;
    t34_im = t38.im / 2.0;
  }

  t37_re += t34_re;
  t37_im += t34_im;
  t39_re = (t39.re * 0.0 - t39.im * 0.5) - (t40.re * 0.0 - t40.im * 0.5);
  t39_im = (t39.re * 0.5 + t39.im * 0.0) - (t40.re * 0.5 + t40.im * 0.0);
  if (t10.im == 0.0) {
    t10_re = t10.re / 2.0;
    t10_im = 0.0;
  } else if (t10.re == 0.0) {
    t10_re = 0.0;
    t10_im = t10.im / 2.0;
  } else {
    t10_re = t10.re / 2.0;
    t10_im = t10.im / 2.0;
  }

  if (t11.im == 0.0) {
    t34_re = t11.re / 2.0;
    t34_im = 0.0;
  } else if (t11.re == 0.0) {
    t34_re = 0.0;
    t34_im = t11.im / 2.0;
  } else {
    t34_re = t11.re / 2.0;
    t34_im = t11.im / 2.0;
  }

  if (t12.im == 0.0) {
    t12_re = t12.re / 2.0;
    t12_im = 0.0;
  } else if (t12.re == 0.0) {
    t12_re = 0.0;
    t12_im = t12.im / 2.0;
  } else {
    t12_re = t12.re / 2.0;
    t12_im = t12.im / 2.0;
  }

  if (t13.im == 0.0) {
    t13_re = t13.re / 2.0;
    t13_im = 0.0;
  } else if (t13.re == 0.0) {
    t13_re = 0.0;
    t13_im = t13.im / 2.0;
  } else {
    t13_re = t13.re / 2.0;
    t13_im = t13.im / 2.0;
  }

  t10_re += t34_re;
  t10_im += t34_im;
  t12_re += t13_re;
  t12_im += t13_im;
  t34_re = (t14.re * 0.0 - t14.im * 0.5) - (t15.re * 0.0 - t15.im * 0.5);
  t34_im = (t14.re * 0.5 + t14.im * 0.0) - (t15.re * 0.5 + t15.im * 0.0);
  t16_re = (t16.re * 0.0 - t16.im * 0.5) - (t17.re * 0.0 - t17.im * 0.5);
  t16_im = (t16.re * 0.5 + t16.im * 0.0) - (t17.re * 0.5 + t17.im * 0.0);
  if (t19.im == 0.0) {
    t19_re = t19.re / 2.0;
    t19_im = 0.0;
  } else if (t19.re == 0.0) {
    t19_re = 0.0;
    t19_im = t19.im / 2.0;
  } else {
    t19_re = t19.re / 2.0;
    t19_im = t19.im / 2.0;
  }

  if (t20.im == 0.0) {
    t20_re = t20.re / 2.0;
    t20_im = 0.0;
  } else if (t20.re == 0.0) {
    t20_re = 0.0;
    t20_im = t20.im / 2.0;
  } else {
    t20_re = t20.re / 2.0;
    t20_im = t20.im / 2.0;
  }

  b_t10_re = (t10_re * t12_re - t10_im * t12_im) + (t34_re * t16_re - t34_im *
    t16_im);
  t10_im = (t10_re * t12_im + t10_im * t12_re) + (t34_re * t16_im + t34_im *
    t16_re);
  t19_re += t20_re;
  t19_im += t20_im;
  if (t25.im == 0.0) {
    t13_re = t25.re / 2.0;
    t13_im = 0.0;
  } else if (t25.re == 0.0) {
    t13_re = 0.0;
    t13_im = t25.im / 2.0;
  } else {
    t13_re = t25.re / 2.0;
    t13_im = t25.im / 2.0;
  }

  if (t26.im == 0.0) {
    t34_re = t26.re / 2.0;
    t34_im = 0.0;
  } else if (t26.re == 0.0) {
    t34_re = 0.0;
    t34_im = t26.im / 2.0;
  } else {
    t34_re = t26.re / 2.0;
    t34_im = t26.im / 2.0;
  }

  t16_re = (t27.re * 0.0 - t27.im * 3.061616997868383E-17) - (t28.re * 0.0 -
    t28.im * 3.061616997868383E-17);
  t16_im = (t27.re * 3.061616997868383E-17 + t27.im * 0.0) - (t28.re *
    3.061616997868383E-17 + t28.im * 0.0);
  t13_re += t34_re;
  t13_im += t34_im;
  t34_re = t31.re * 3.061616997868383E-17 + t32.re * 3.061616997868383E-17;
  t34_im = t31.im * 3.061616997868383E-17 + t32.im * 3.061616997868383E-17;
  t12_re = (t29.re * 0.0 - t29.im * 0.5) - (t30.re * 0.0 - t30.im * 0.5);
  t12_im = (t29.re * 0.5 + t29.im * 0.0) - (t30.re * 0.5 + t30.im * 0.0);
  t20_re = (t21.re * 0.0 - t21.im * 0.5) - (t22.re * 0.0 - t22.im * 0.5);
  t20_im = (t21.re * 0.5 + t21.im * 0.0) - (t22.re * 0.5 + t22.im * 0.0);
  t23_re = (((t23.re * 0.0 - t23.im * 6.123233995736766E-17) - (t24.re * 0.0 -
              t24.im * 6.123233995736766E-17)) - (t16_re * t13_re - t16_im *
             t13_im)) + (t34_re * t12_re - t34_im * t12_im);
  t34_re = (((t23.re * 6.123233995736766E-17 + t23.im * 0.0) - (t24.re *
              6.123233995736766E-17 + t24.im * 0.0)) - (t16_re * t13_im + t16_im
             * t13_re)) + (t34_re * t12_im + t34_im * t12_re);
  t54_re = (t54.re * 0.0 - t54.im * 0.5) - (t55.re * 0.0 - t55.im * 0.5);
  t54_im = (t54.re * 0.5 + t54.im * 0.0) - (t55.re * 0.5 + t55.im * 0.0);
  t10_re = (b_t10_re * t19_re - t10_im * t19_im) + (t20_re * t23_re - t20_im *
    t34_re);
  t10_im = (b_t10_re * t19_im + t10_im * t19_re) + (t20_re * t34_re + t20_im *
    t23_re);
  t13_re = (t8.re * 0.0 - t8.im * 0.5) - (t9.re * 0.0 - t9.im * 0.5);
  t8_im = (t8.re * 0.5 + t8.im * 0.0) - (t9.re * 0.5 + t9.im * 0.0);
  t13_im = (t5.re * 0.0 - t5.im * 0.5) - (t6.re * 0.0 - t6.im * 0.5);
  t16_re = (t5.re * 0.5 + t5.im * 0.0) - (t6.re * 0.5 + t6.im * 0.0);
  if (t8.im == 0.0) {
    t16_im = t8.re / 2.0;
    t20_re = 0.0;
  } else if (t8.re == 0.0) {
    t16_im = 0.0;
    t20_re = t8.im / 2.0;
  } else {
    t16_im = t8.re / 2.0;
    t20_re = t8.im / 2.0;
  }

  if (t85.im == 0.0) {
    t12_im = t85.re / 2.0;
    t85_im = 0.0;
  } else if (t85.re == 0.0) {
    t12_im = 0.0;
    t85_im = t85.im / 2.0;
  } else {
    t12_im = t85.re / 2.0;
    t85_im = t85.im / 2.0;
  }

  if (t3.im == 0.0) {
    t20_im = t3.re / 2.0;
    t3_im = 0.0;
  } else if (t3.re == 0.0) {
    t20_im = 0.0;
    t3_im = t3.im / 2.0;
  } else {
    t20_im = t3.re / 2.0;
    t3_im = t3.im / 2.0;
  }

  if (t4.im == 0.0) {
    t34_re = t4.re / 2.0;
    t34_im = 0.0;
  } else if (t4.re == 0.0) {
    t34_re = 0.0;
    t34_im = t4.im / 2.0;
  } else {
    t34_re = t4.re / 2.0;
    t34_im = t4.im / 2.0;
  }

  t16_im += t12_im;
  t20_re += t85_im;
  t20_im += t34_re;
  t3_im += t34_im;
  t19_re_tmp = t87.re * 0.0;
  t19_re = (t19.re * 0.0 - t19.im * 0.5) - (t19_re_tmp - t87.im * 0.5);
  t19_im_tmp = t87.im * 0.0;
  t19_im = (t19.re * 0.5 + t19.im * 0.0) - (t87.re * 0.5 + t19_im_tmp);
  t8_re = (t13_re * t13_im - t8_im * t16_re) + (t16_im * t20_im - t20_re * t3_im);
  t8_im = (t13_re * t16_re + t8_im * t13_im) + (t16_im * t3_im + t20_re * t20_im);
  if (t41.im == 0.0) {
    t41_re = t41.re / 2.0;
    t41_im = 0.0;
  } else if (t41.re == 0.0) {
    t41_re = 0.0;
    t41_im = t41.im / 2.0;
  } else {
    t41_re = t41.re / 2.0;
    t41_im = t41.im / 2.0;
  }

  if (t42.im == 0.0) {
    t16_re = t42.re / 2.0;
    t16_im = 0.0;
  } else if (t42.re == 0.0) {
    t16_re = 0.0;
    t16_im = t42.im / 2.0;
  } else {
    t16_re = t42.re / 2.0;
    t16_im = t42.im / 2.0;
  }

  if (t45.im == 0.0) {
    t20_re = t45.re / 2.0;
    t20_im = 0.0;
  } else if (t45.re == 0.0) {
    t20_re = 0.0;
    t20_im = t45.im / 2.0;
  } else {
    t20_re = t45.re / 2.0;
    t20_im = t45.im / 2.0;
  }

  if (t46.im == 0.0) {
    t34_re = t46.re / 2.0;
    t34_im = 0.0;
  } else if (t46.re == 0.0) {
    t34_re = 0.0;
    t34_im = t46.im / 2.0;
  } else {
    t34_re = t46.re / 2.0;
    t34_im = t46.im / 2.0;
  }

  t12_re = (t47.re * 0.0 - t47.im * 3.061616997868383E-17) - (t48.re * 0.0 -
    t48.im * 3.061616997868383E-17);
  t12_im = (t47.re * 3.061616997868383E-17 + t47.im * 0.0) - (t48.re *
    3.061616997868383E-17 + t48.im * 0.0);
  t20_re += t34_re;
  t20_im += t34_im;
  t34_re = t51.re * 3.061616997868383E-17 + t52.re * 3.061616997868383E-17;
  t34_im = t51.im * 3.061616997868383E-17 + t52.im * 3.061616997868383E-17;
  t13_re = (t49.re * 0.0 - t49.im * 0.5) - (t50.re * 0.0 - t50.im * 0.5);
  t13_im = (t49.re * 0.5 + t49.im * 0.0) - (t50.re * 0.5 + t50.im * 0.0);
  t41_re += t16_re;
  t41_im += t16_im;
  t43_re = (((t43.re * 0.0 - t43.im * 6.123233995736766E-17) - (t44.re * 0.0 -
              t44.im * 6.123233995736766E-17)) - (t12_re * t20_re - t12_im *
             t20_im)) + (t34_re * t13_re - t34_im * t13_im);
  t43_im = (((t43.re * 6.123233995736766E-17 + t43.im * 0.0) - (t44.re *
              6.123233995736766E-17 + t44.im * 0.0)) - (t12_re * t20_im + t12_im
             * t20_re)) + (t34_re * t13_im + t34_im * t13_re);
  if (t54.im == 0.0) {
    b_t54_re = t54.re / 2.0;
    b_t54_im = 0.0;
  } else if (t54.re == 0.0) {
    b_t54_re = 0.0;
    b_t54_im = t54.im / 2.0;
  } else {
    b_t54_re = t54.re / 2.0;
    b_t54_im = t54.im / 2.0;
  }

  if (t55.im == 0.0) {
    t55_re = t55.re / 2.0;
    t55_im = 0.0;
  } else if (t55.re == 0.0) {
    t55_re = 0.0;
    t55_im = t55.im / 2.0;
  } else {
    t55_re = t55.re / 2.0;
    t55_im = t55.im / 2.0;
  }

  if (t70.im == 0.0) {
    t70_re = t70.re / 2.0;
    t70_im = 0.0;
  } else if (t70.re == 0.0) {
    t70_re = 0.0;
    t70_im = t70.im / 2.0;
  } else {
    t70_re = t70.re / 2.0;
    t70_im = t70.im / 2.0;
  }

  if (t71.im == 0.0) {
    t34_re = t71.re / 2.0;
    t34_im = 0.0;
  } else if (t71.re == 0.0) {
    t34_re = 0.0;
    t34_im = t71.im / 2.0;
  } else {
    t34_re = t71.re / 2.0;
    t34_im = t71.im / 2.0;
  }

  t70_re += t34_re;
  t70_im += t34_im;
  t72_re = (t72.re * 0.0 - t72.im * 0.5) - (t73.re * 0.0 - t73.im * 0.5);
  b_t10_re = (t72.re * 0.5 + t72.im * 0.0) - (t73.re * 0.5 + t73.im * 0.0);
  if (t74.im == 0.0) {
    t74_re = t74.re / 2.0;
    t74_im = 0.0;
  } else if (t74.re == 0.0) {
    t74_re = 0.0;
    t74_im = t74.im / 2.0;
  } else {
    t74_re = t74.re / 2.0;
    t74_im = t74.im / 2.0;
  }

  if (t75.im == 0.0) {
    t34_re = t75.re / 2.0;
    t34_im = 0.0;
  } else if (t75.re == 0.0) {
    t34_re = 0.0;
    t34_im = t75.im / 2.0;
  } else {
    t34_re = t75.re / 2.0;
    t34_im = t75.im / 2.0;
  }

  t74_re += t34_re;
  t74_im += t34_im;
  t76_re = (t76.re * 0.0 - t76.im * 0.5) - (t77.re * 0.0 - t77.im * 0.5);
  t3_im = (t76.re * 0.5 + t76.im * 0.0) - (t77.re * 0.5 + t77.im * 0.0);
  if (t62.im == 0.0) {
    t16_re = t62.re / 2.0;
    t16_im = 0.0;
  } else if (t62.re == 0.0) {
    t16_re = 0.0;
    t16_im = t62.im / 2.0;
  } else {
    t16_re = t62.re / 2.0;
    t16_im = t62.im / 2.0;
  }

  if (t63.im == 0.0) {
    t34_re = t63.re / 2.0;
    t34_im = 0.0;
  } else if (t63.re == 0.0) {
    t34_re = 0.0;
    t34_im = t63.im / 2.0;
  } else {
    t34_re = t63.re / 2.0;
    t34_im = t63.im / 2.0;
  }

  t20_re = (t64.re * 0.0 - t64.im * 3.061616997868383E-17) - (t65.re * 0.0 -
    t65.im * 3.061616997868383E-17);
  t20_im = (t64.re * 3.061616997868383E-17 + t64.im * 0.0) - (t65.re *
    3.061616997868383E-17 + t65.im * 0.0);
  t16_re += t34_re;
  t16_im += t34_im;
  t34_re = t68.re * 3.061616997868383E-17 + t69.re * 3.061616997868383E-17;
  t34_im = t68.im * 3.061616997868383E-17 + t69.im * 3.061616997868383E-17;
  t13_re = (t66.re * 0.0 - t66.im * 0.5) - (t67.re * 0.0 - t67.im * 0.5);
  t13_im = (t66.re * 0.5 + t66.im * 0.0) - (t67.re * 0.5 + t67.im * 0.0);
  t23_re = t58.re * 3.061616997868383E-17 + t59.re * 3.061616997868383E-17;
  t58_im = t58.im * 3.061616997868383E-17 + t59.im * 3.061616997868383E-17;
  t60_re = (((t60.re * 0.0 - t60.im * 6.123233995736766E-17) - (t61.re * 0.0 -
              t61.im * 6.123233995736766E-17)) - (t20_re * t16_re - t20_im *
             t16_im)) + (t34_re * t13_re - t34_im * t13_im);
  t20_im = (((t60.re * 6.123233995736766E-17 + t60.im * 0.0) - (t61.re *
              6.123233995736766E-17 + t61.im * 0.0)) - (t20_re * t16_im + t20_im
             * t16_re)) + (t34_re * t13_im + t34_im * t13_re);
  if (t78.im == 0.0) {
    t16_re = t78.re / 2.0;
    t12_re = 0.0;
  } else if (t78.re == 0.0) {
    t16_re = 0.0;
    t12_re = t78.im / 2.0;
  } else {
    t16_re = t78.re / 2.0;
    t12_re = t78.im / 2.0;
  }

  if (t79.im == 0.0) {
    t34_re = t79.re / 2.0;
    t34_im = 0.0;
  } else if (t79.re == 0.0) {
    t34_re = 0.0;
    t34_im = t79.im / 2.0;
  } else {
    t34_re = t79.re / 2.0;
    t34_im = t79.im / 2.0;
  }

  if (t80.im == 0.0) {
    t16_im = t80.re / 2.0;
    t20_re = 0.0;
  } else if (t80.re == 0.0) {
    t16_im = 0.0;
    t20_re = t80.im / 2.0;
  } else {
    t16_im = t80.re / 2.0;
    t20_re = t80.im / 2.0;
  }

  if (t81.im == 0.0) {
    t13_re = t81.re / 2.0;
    t13_im = 0.0;
  } else if (t81.re == 0.0) {
    t13_re = 0.0;
    t13_im = t81.im / 2.0;
  } else {
    t13_re = t81.re / 2.0;
    t13_im = t81.im / 2.0;
  }

  t16_re += t34_re;
  t12_re += t34_im;
  t16_im += t13_re;
  t20_re += t13_im;
  t34_re = (t83.re * 0.0 - t83.im * 0.5) - (t82.re * 0.0 - t82.im * 0.5);
  t34_im = (t83.re * 0.5 + t83.im * 0.0) - (t82.re * 0.5 + t82.im * 0.0);
  t12_im = (t85.re * 0.0 - t85.im * 0.5) - (t84.re * 0.0 - t84.im * 0.5);
  t85_im = (t85.re * 0.5 + t85.im * 0.0) - (t84.re * 0.5 + t84.im * 0.0);
  t13_im = (t16_re * t16_im - t12_re * t20_re) + (t34_re * t12_im - t34_im *
    t85_im);
  t12_re = (t16_re * t20_re + t12_re * t16_im) + (t34_re * t85_im + t34_im *
    t12_im);
  t13_re = (t19_re_tmp - t87.im * 3.061616997868383E-17) - (t86.re * 0.0 -
    t86.im * 3.061616997868383E-17);
  t34_re = (t87.re * 3.061616997868383E-17 + t19_im_tmp) - (t86.re *
    3.061616997868383E-17 + t86.im * 0.0);
  b_t54_re += t55_re;
  b_t54_im += t55_im;
  t34_im = (((((t56.re * 0.0 - t56.im * 3.749399456654644E-33) - (t57.re * 0.0 -
    t57.im * 3.749399456654644E-33)) + (t70_re * t72_re - t70_im * b_t10_re)) -
             (t74_re * t76_re - t74_im * t3_im)) + (t23_re * t60_re - t58_im *
             t20_im)) + (t13_im * t13_re - t12_re * t34_re);
  t34_re = (((((t56.re * 3.749399456654644E-33 + t56.im * 0.0) - (t57.re *
    3.749399456654644E-33 + t57.im * 0.0)) + (t70_re * b_t10_re + t70_im *
    t72_re)) - (t74_re * t3_im + t74_im * t76_re)) + (t23_re * t20_im + t58_im *
             t60_re)) + (t13_im * t34_re + t12_re * t13_re);
  b_G_q[1].re = -g * ((((((((t3.re * 0.1335 - t3.im * 4.7990846441586913E-18) +
    (t83.re * 0.1335 - t83.im * -4.7990846441586913E-18)) + (t33_re * t35_re -
    t33_im * t35_im) * 0.1376) - (t37_re * t39_re - t37_im * t39_im) * 0.1376) -
    (t54_re * t10_re - t54_im * t10_im) * 0.0215) + (t19_re * t8_re - t19_im *
    t8_im) * 1.3164953090834051E-18) - (t41_re * t43_re - t41_im * t43_im) *
                       1.3164953090834051E-18) + (b_t54_re * t34_im - b_t54_im *
    t34_re) * 0.0215);
  b_G_q[1].im = -g * ((((((((t3.re * 4.7990846441586913E-18 + t3.im * 0.1335) +
    (t83.re * -4.7990846441586913E-18 + t83.im * 0.1335)) + (t33_re * t35_im +
    t33_im * t35_re) * 0.1376) - (t37_re * t39_im + t37_im * t39_re) * 0.1376) -
    (t54_re * t10_im + t54_im * t10_re) * 0.0215) + (t19_re * t8_im + t19_im *
    t8_re) * 1.3164953090834051E-18) - (t41_re * t43_im + t41_im * t43_re) *
                       1.3164953090834051E-18) + (b_t54_re * t34_re + b_t54_im *
    t34_im) * 0.0215);
  if (t154.im == 0.0) {
    t8_im = t154.re / 2.0;
    t54_re = 0.0;
  } else if (t154.re == 0.0) {
    t8_im = 0.0;
    t54_re = t154.im / 2.0;
  } else {
    t8_im = t154.re / 2.0;
    t54_re = t154.im / 2.0;
  }

  if (t155.im == 0.0) {
    t34_re = t155.re / 2.0;
    t34_im = 0.0;
  } else if (t155.re == 0.0) {
    t34_re = 0.0;
    t34_im = t155.im / 2.0;
  } else {
    t34_re = t155.re / 2.0;
    t34_im = t155.im / 2.0;
  }

  t8_im += t34_re;
  t54_re += t34_im;
  t19_re_tmp = (t156.re * 0.0 - t156.im * 0.5) - (t157.re * 0.0 - t157.im * 0.5);
  t19_im_tmp = (t156.re * 0.5 + t156.im * 0.0) - (t157.re * 0.5 + t157.im * 0.0);
  t41_im = t98.re * 3.061616997868383E-17 + t99.re * 3.061616997868383E-17;
  t8_re = t98.im * 3.061616997868383E-17 + t99.im * 3.061616997868383E-17;
  t13_re = (t96.re * 0.0 - t96.im * 0.5) - (t97.re * 0.0 - t97.im * 0.5);
  t13_im = (t96.re * 0.5 + t96.im * 0.0) - (t97.re * 0.5 + t97.im * 0.0);
  if (t94.im == 0.0) {
    t16_re = t94.re / 2.0;
    t16_im = 0.0;
  } else if (t94.re == 0.0) {
    t16_re = 0.0;
    t16_im = t94.im / 2.0;
  } else {
    t16_re = t94.re / 2.0;
    t16_im = t94.im / 2.0;
  }

  if (t95.im == 0.0) {
    t34_re = t95.re / 2.0;
    t34_im = 0.0;
  } else if (t95.re == 0.0) {
    t34_re = 0.0;
    t34_im = t95.im / 2.0;
  } else {
    t34_re = t95.re / 2.0;
    t34_im = t95.im / 2.0;
  }

  t20_re = (t92.re * 0.0 - t92.im * 3.061616997868383E-17) - (t93.re * 0.0 -
    t93.im * 3.061616997868383E-17);
  t20_im = (t92.re * 3.061616997868383E-17 + t92.im * 0.0) - (t93.re *
    3.061616997868383E-17 + t93.im * 0.0);
  t16_re = (t16_re + t34_re) + 7.498798913309288E-33;
  t16_im += t34_im;
  t72_re = (t41_im * t13_re - t8_re * t13_im) - (t20_re * t16_re - t20_im *
    t16_im);
  t8_re = (t41_im * t13_im + t8_re * t13_re) - (t20_re * t16_im + t20_im *
    t16_re);
  t58_im = (t100.re * 0.0 - t100.im * 0.5) - (t101.re * 0.0 - t101.im * 0.5);
  t60_re = (t100.re * 0.5 + t100.im * 0.0) - (t101.re * 0.5 + t101.im * 0.0);
  t13_im = (t104.re * 0.0 - t104.im * 0.5) - (t105.re * 0.0 - t105.im * 0.5);
  t76_re = (t104.re * 0.5 + t104.im * 0.0) - (t105.re * 0.5 + t105.im * 0.0);
  t20_re = (t106.re * 0.0 - t106.im * 0.5) - (t107.re * 0.0 - t107.im * 0.5);
  t20_im = (t106.re * 0.5 + t106.im * 0.0) - (t107.re * 0.5 + t107.im * 0.0);
  if (t108.im == 0.0) {
    t12_re = t108.re / 2.0;
    t12_im = 0.0;
  } else if (t108.re == 0.0) {
    t12_re = 0.0;
    t12_im = t108.im / 2.0;
  } else {
    t12_re = t108.re / 2.0;
    t12_im = t108.im / 2.0;
  }

  if (t109.im == 0.0) {
    t34_re = t109.re / 2.0;
    t34_im = 0.0;
  } else if (t109.re == 0.0) {
    t34_re = 0.0;
    t34_im = t109.im / 2.0;
  } else {
    t34_re = t109.re / 2.0;
    t34_im = t109.im / 2.0;
  }

  if (t110.im == 0.0) {
    b_t10_re = t110.re / 2.0;
    t85_im = 0.0;
  } else if (t110.re == 0.0) {
    b_t10_re = 0.0;
    t85_im = t110.im / 2.0;
  } else {
    b_t10_re = t110.re / 2.0;
    t85_im = t110.im / 2.0;
  }

  if (t111.im == 0.0) {
    t16_re = t111.re / 2.0;
    t16_im = 0.0;
  } else if (t111.re == 0.0) {
    t16_re = 0.0;
    t16_im = t111.im / 2.0;
  } else {
    t16_re = t111.re / 2.0;
    t16_im = t111.im / 2.0;
  }

  t12_re += t34_re;
  t12_im += t34_im;
  b_t10_re = (b_t10_re + t16_re) + 7.498798913309288E-33;
  t85_im += t16_im;
  if (t102.im == 0.0) {
    t23_re = t102.re / 2.0;
    t3_im = 0.0;
  } else if (t102.re == 0.0) {
    t23_re = 0.0;
    t3_im = t102.im / 2.0;
  } else {
    t23_re = t102.re / 2.0;
    t3_im = t102.im / 2.0;
  }

  if (t103.im == 0.0) {
    t34_re = t103.re / 2.0;
    t34_im = 0.0;
  } else if (t103.re == 0.0) {
    t34_re = 0.0;
    t34_im = t103.im / 2.0;
  } else {
    t34_re = t103.re / 2.0;
    t34_im = t103.im / 2.0;
  }

  t13_re = (t13_im * t20_re - t76_re * t20_im) + (t12_re * b_t10_re - t12_im *
    t85_im);
  t76_re = (t13_im * t20_im + t76_re * t20_re) + (t12_re * t85_im + t12_im *
    b_t10_re);
  t23_re += t34_re;
  t3_im += t34_im;
  t43_re = (t112.re * 0.0 - t112.im * 0.5) - (t113.re * 0.0 - t113.im * 0.5);
  t41_re = (t112.re * 0.5 + t112.im * 0.0) - (t113.re * 0.5 + t113.im * 0.0);
  t41_im = (t72_re * t58_im - t8_re * t60_re) + (t13_re * t23_re - t76_re *
    t3_im);
  t8_re = (t72_re * t60_re + t8_re * t58_im) + (t13_re * t3_im + t76_re * t23_re);
  if (t124.im == 0.0) {
    t43_im = t124.re / 2.0;
    b_t54_re = 0.0;
  } else if (t124.re == 0.0) {
    t43_im = 0.0;
    b_t54_re = t124.im / 2.0;
  } else {
    t43_im = t124.re / 2.0;
    b_t54_re = t124.im / 2.0;
  }

  if (t125.im == 0.0) {
    t55_im = t125.re / 2.0;
    t70_re = 0.0;
  } else if (t125.re == 0.0) {
    t55_im = 0.0;
    t70_re = t125.im / 2.0;
  } else {
    t55_im = t125.re / 2.0;
    t70_re = t125.im / 2.0;
  }

  if (t136.im == 0.0) {
    t70_im = t136.re / 2.0;
    b_t54_im = 0.0;
  } else if (t136.re == 0.0) {
    t70_im = 0.0;
    b_t54_im = t136.im / 2.0;
  } else {
    t70_im = t136.re / 2.0;
    b_t54_im = t136.im / 2.0;
  }

  if (t137.im == 0.0) {
    t34_re = t137.re / 2.0;
    t34_im = 0.0;
  } else if (t137.re == 0.0) {
    t34_re = 0.0;
    t34_im = t137.im / 2.0;
  } else {
    t34_re = t137.re / 2.0;
    t34_im = t137.im / 2.0;
  }

  t70_im += t34_re;
  b_t54_im += t34_im;
  t74_re = (t138.re * 0.0 - t138.im * 0.5) - (t139.re * 0.0 - t139.im * 0.5);
  t74_im = (t138.re * 0.5 + t138.im * 0.0) - (t139.re * 0.5 + t139.im * 0.0);
  t13_re = t150.re * 3.061616997868383E-17 + t151.re * 3.061616997868383E-17;
  t55_re = t150.im * 3.061616997868383E-17 + t151.im * 3.061616997868383E-17;
  t13_im = (t148.re * 0.0 - t148.im * 0.5) - (t149.re * 0.0 - t149.im * 0.5);
  t16_re = (t148.re * 0.5 + t148.im * 0.0) - (t149.re * 0.5 + t149.im * 0.0);
  if (t146.im == 0.0) {
    t16_im = t146.re / 2.0;
    t20_re = 0.0;
  } else if (t146.re == 0.0) {
    t16_im = 0.0;
    t20_re = t146.im / 2.0;
  } else {
    t16_im = t146.re / 2.0;
    t20_re = t146.im / 2.0;
  }

  if (t147.im == 0.0) {
    t34_re = t147.re / 2.0;
    t34_im = 0.0;
  } else if (t147.re == 0.0) {
    t34_re = 0.0;
    t34_im = t147.im / 2.0;
  } else {
    t34_re = t147.re / 2.0;
    t34_im = t147.im / 2.0;
  }

  t20_im = (t144.re * 0.0 - t144.im * 3.061616997868383E-17) - (t145.re * 0.0 -
    t145.im * 3.061616997868383E-17);
  t12_re = (t144.re * 3.061616997868383E-17 + t144.im * 0.0) - (t145.re *
    3.061616997868383E-17 + t145.im * 0.0);
  t16_im = (t16_im + t34_re) + 7.498798913309288E-33;
  t20_re += t34_im;
  t76_re = t152.re * 3.061616997868383E-17 + t153.re * 3.061616997868383E-17;
  t3_im = t152.im * 3.061616997868383E-17 + t153.im * 3.061616997868383E-17;
  t72_re = (t13_re * t13_im - t55_re * t16_re) - (t20_im * t16_im - t12_re *
    t20_re);
  t55_re = (t13_re * t16_re + t55_re * t13_im) - (t20_im * t20_re + t12_re *
    t16_im);
  t16_re = (t126.re * 0.0 - t126.im * 0.5) - (t127.re * 0.0 - t127.im * 0.5);
  t60_re = (t126.re * 0.5 + t126.im * 0.0) - (t127.re * 0.5 + t127.im * 0.0);
  t16_im = (t128.re * 0.0 - t128.im * 0.5) - (t129.re * 0.0 - t129.im * 0.5);
  t20_re = (t128.re * 0.5 + t128.im * 0.0) - (t129.re * 0.5 + t129.im * 0.0);
  if (t130.im == 0.0) {
    t20_im = t130.re / 2.0;
    t12_re = 0.0;
  } else if (t130.re == 0.0) {
    t20_im = 0.0;
    t12_re = t130.im / 2.0;
  } else {
    t20_im = t130.re / 2.0;
    t12_re = t130.im / 2.0;
  }

  if (t131.im == 0.0) {
    t34_re = t131.re / 2.0;
    t34_im = 0.0;
  } else if (t131.re == 0.0) {
    t34_re = 0.0;
    t34_im = t131.im / 2.0;
  } else {
    t34_re = t131.re / 2.0;
    t34_im = t131.im / 2.0;
  }

  if (t132.im == 0.0) {
    t12_im = t132.re / 2.0;
    b_t10_re = 0.0;
  } else if (t132.re == 0.0) {
    t12_im = 0.0;
    b_t10_re = t132.im / 2.0;
  } else {
    t12_im = t132.re / 2.0;
    b_t10_re = t132.im / 2.0;
  }

  if (t133.im == 0.0) {
    t13_re = t133.re / 2.0;
    t13_im = 0.0;
  } else if (t133.re == 0.0) {
    t13_re = 0.0;
    t13_im = t133.im / 2.0;
  } else {
    t13_re = t133.re / 2.0;
    t13_im = t133.im / 2.0;
  }

  t20_im += t34_re;
  t12_re += t34_im;
  t12_im = (t12_im + t13_re) + 7.498798913309288E-33;
  b_t10_re += t13_im;
  t85_im = (t134.re * 0.0 - t134.im * 3.061616997868383E-17) - (t135.re * 0.0 -
    t135.im * 3.061616997868383E-17);
  t23_re = (t134.re * 3.061616997868383E-17 + t134.im * 0.0) - (t135.re *
    3.061616997868383E-17 + t135.im * 0.0);
  t58_im = (t16_re * t16_im - t60_re * t20_re) + (t20_im * t12_im - t12_re *
    b_t10_re);
  t60_re = (t16_re * t20_re + t60_re * t16_im) + (t20_im * b_t10_re + t12_re *
    t12_im);
  if (t142.im == 0.0) {
    t13_re = t142.re / 2.0;
    t13_im = 0.0;
  } else if (t142.re == 0.0) {
    t13_re = 0.0;
    t13_im = t142.im / 2.0;
  } else {
    t13_re = t142.re / 2.0;
    t13_im = t142.im / 2.0;
  }

  if (t143.im == 0.0) {
    t34_re = t143.re / 2.0;
    t34_im = 0.0;
  } else if (t143.re == 0.0) {
    t34_re = 0.0;
    t34_im = t143.im / 2.0;
  } else {
    t34_re = t143.re / 2.0;
    t34_im = t143.im / 2.0;
  }

  t16_re = (t140.re * 0.0 - t140.im * 0.5) - (t141.re * 0.0 - t141.im * 0.5);
  t16_im = (t140.re * 0.5 + t140.im * 0.0) - (t141.re * 0.5 + t141.im * 0.0);
  t13_re = (t13_re + t34_re) + 7.498798913309288E-33;
  t13_im += t34_im;
  t43_im += t55_im;
  b_t54_re += t70_re;
  t55_im = (((t70_im * t74_re - b_t54_im * t74_im) - (t76_re * t72_re - t3_im *
              t55_re)) + (t85_im * t58_im - t23_re * t60_re)) - (t16_re * t13_re
    - t16_im * t13_im);
  b_t54_im = (((t70_im * t74_im + b_t54_im * t74_re) - (t76_re * t55_re + t3_im *
    t72_re)) + (t85_im * t60_re + t23_re * t58_im)) - (t16_re * t13_im + t16_im *
    t13_re);
  if (t170.im == 0.0) {
    t3_im = t170.re / 2.0;
    t72_re = 0.0;
  } else if (t170.re == 0.0) {
    t3_im = 0.0;
    t72_re = t170.im / 2.0;
  } else {
    t3_im = t170.re / 2.0;
    t72_re = t170.im / 2.0;
  }

  if (t171.im == 0.0) {
    t34_re = t171.re / 2.0;
    t34_im = 0.0;
  } else if (t171.re == 0.0) {
    t34_re = 0.0;
    t34_im = t171.im / 2.0;
  } else {
    t34_re = t171.re / 2.0;
    t34_im = t171.im / 2.0;
  }

  t74_re = (t168.re * 0.0 - t168.im * 0.5) - (t169.re * 0.0 - t169.im * 0.5);
  t74_im = (t168.re * 0.5 + t168.im * 0.0) - (t169.re * 0.5 + t169.im * 0.0);
  t3_im = (t3_im + t34_re) + 7.498798913309288E-33;
  t72_re += t34_im;
  t13_re = t120.re * 3.061616997868383E-17 + t121.re * 3.061616997868383E-17;
  t76_re = t120.im * 3.061616997868383E-17 + t121.im * 3.061616997868383E-17;
  t13_im = (t118.re * 0.0 - t118.im * 0.5) - (t119.re * 0.0 - t119.im * 0.5);
  t16_re = (t118.re * 0.5 + t118.im * 0.0) - (t119.re * 0.5 + t119.im * 0.0);
  if (t116.im == 0.0) {
    t16_im = t116.re / 2.0;
    t20_re = 0.0;
  } else if (t116.re == 0.0) {
    t16_im = 0.0;
    t20_re = t116.im / 2.0;
  } else {
    t16_im = t116.re / 2.0;
    t20_re = t116.im / 2.0;
  }

  if (t117.im == 0.0) {
    t34_re = t117.re / 2.0;
    t34_im = 0.0;
  } else if (t117.re == 0.0) {
    t34_re = 0.0;
    t34_im = t117.im / 2.0;
  } else {
    t34_re = t117.re / 2.0;
    t34_im = t117.im / 2.0;
  }

  t20_im = (t114.re * 0.0 - t114.im * 3.061616997868383E-17) - (t115.re * 0.0 -
    t115.im * 3.061616997868383E-17);
  t12_re = (t114.re * 3.061616997868383E-17 + t114.im * 0.0) - (t115.re *
    3.061616997868383E-17 + t115.im * 0.0);
  t16_im = (t16_im + t34_re) + 7.498798913309288E-33;
  t20_re += t34_im;
  if (t122.im == 0.0) {
    t23_re = t122.re / 2.0;
    t58_im = 0.0;
  } else if (t122.re == 0.0) {
    t23_re = 0.0;
    t58_im = t122.im / 2.0;
  } else {
    t23_re = t122.re / 2.0;
    t58_im = t122.im / 2.0;
  }

  if (t123.im == 0.0) {
    t34_re = t123.re / 2.0;
    t34_im = 0.0;
  } else if (t123.re == 0.0) {
    t34_re = 0.0;
    t34_im = t123.im / 2.0;
  } else {
    t34_re = t123.re / 2.0;
    t34_im = t123.im / 2.0;
  }

  t60_re = (t13_re * t13_im - t76_re * t16_re) - (t20_im * t16_im - t12_re *
    t20_re);
  t76_re = (t13_re * t16_re + t76_re * t13_im) - (t20_im * t20_re + t12_re *
    t16_im);
  t23_re += t34_re;
  t58_im += t34_im;
  t16_re = (t160.re * 0.0 - t160.im * 0.5) - (t161.re * 0.0 - t161.im * 0.5);
  t85_im = (t160.re * 0.5 + t160.im * 0.0) - (t161.re * 0.5 + t161.im * 0.0);
  t16_im = (t162.re * 0.0 - t162.im * 0.5) - (t163.re * 0.0 - t163.im * 0.5);
  t20_re = (t162.re * 0.5 + t162.im * 0.0) - (t163.re * 0.5 + t163.im * 0.0);
  if (t164.im == 0.0) {
    t20_im = t164.re / 2.0;
    t12_re = 0.0;
  } else if (t164.re == 0.0) {
    t20_im = 0.0;
    t12_re = t164.im / 2.0;
  } else {
    t20_im = t164.re / 2.0;
    t12_re = t164.im / 2.0;
  }

  if (t165.im == 0.0) {
    t34_re = t165.re / 2.0;
    t34_im = 0.0;
  } else if (t165.re == 0.0) {
    t34_re = 0.0;
    t34_im = t165.im / 2.0;
  } else {
    t34_re = t165.re / 2.0;
    t34_im = t165.im / 2.0;
  }

  if (t166.im == 0.0) {
    t12_im = t166.re / 2.0;
    b_t10_re = 0.0;
  } else if (t166.re == 0.0) {
    t12_im = 0.0;
    b_t10_re = t166.im / 2.0;
  } else {
    t12_im = t166.re / 2.0;
    b_t10_re = t166.im / 2.0;
  }

  if (t167.im == 0.0) {
    t13_re = t167.re / 2.0;
    t13_im = 0.0;
  } else if (t167.re == 0.0) {
    t13_re = 0.0;
    t13_im = t167.im / 2.0;
  } else {
    t13_re = t167.re / 2.0;
    t13_im = t167.im / 2.0;
  }

  t20_im += t34_re;
  t12_re += t34_im;
  t12_im = (t12_im + t13_re) + 7.498798913309288E-33;
  b_t10_re += t13_im;
  t13_re = (t16_re * t16_im - t85_im * t20_re) + (t20_im * t12_im - t12_re *
    b_t10_re);
  t85_im = (t16_re * t20_re + t85_im * t16_im) + (t20_im * b_t10_re + t12_re *
    t12_im);
  t34_re = (t158.re * 0.0 - t158.im * 0.5) - (t159.re * 0.0 - t159.im * 0.5);
  t34_im = (t158.re * 0.5 + t158.im * 0.0) - (t159.re * 0.5 + t159.im * 0.0);
  b_G_q[2].re = -g * ((((((t8_im * t19_re_tmp - t54_re * t19_im_tmp) * 0.1376 +
    (t43_re * t41_im - t41_re * t8_re) * 0.0215) + (t43_im * t55_im - b_t54_re *
    b_t54_im) * 0.0215) - (t74_re * t3_im - t74_im * t72_re) * 0.1376) + (t60_re
    * t23_re - t76_re * t58_im) * 1.3164953090834051E-18) - (t13_re * t34_re -
    t85_im * t34_im) * 1.3164953090834051E-18);
  b_G_q[2].im = -g * ((((((t8_im * t19_im_tmp + t54_re * t19_re_tmp) * 0.1376 +
    (t43_re * t8_re + t41_re * t41_im) * 0.0215) + (t43_im * b_t54_im + b_t54_re
    * t55_im) * 0.0215) - (t74_re * t72_re + t74_im * t3_im) * 0.1376) + (t60_re
    * t58_im + t76_re * t23_re) * 1.3164953090834051E-18) - (t13_re * t34_im +
    t85_im * t34_re) * 1.3164953090834051E-18);
  if (t172.im == 0.0) {
    t85_im = t172.re / 2.0;
    t41_im = 0.0;
  } else if (t172.re == 0.0) {
    t85_im = 0.0;
    t41_im = t172.im / 2.0;
  } else {
    t85_im = t172.re / 2.0;
    t41_im = t172.im / 2.0;
  }

  if (t173.im == 0.0) {
    t34_re = t173.re / 2.0;
    t34_im = 0.0;
  } else if (t173.re == 0.0) {
    t34_re = 0.0;
    t34_im = t173.im / 2.0;
  } else {
    t34_re = t173.re / 2.0;
    t34_im = t173.im / 2.0;
  }

  t16_re = (t182.re * 0.0 - t182.im * 3.061616997868383E-17) - (t183.re * 0.0 -
    t183.im * 3.061616997868383E-17);
  t16_im = (t182.re * 3.061616997868383E-17 + t182.im * 0.0) - (t183.re *
    3.061616997868383E-17 + t183.im * 0.0);
  t20_re = (t180.re * 0.0 - t180.im * 0.5) - (t181.re * 0.0 - t181.im * 0.5);
  t20_im = (t180.re * 0.5 + t180.im * 0.0) - (t181.re * 0.5 + t181.im * 0.0);
  if (t178.im == 0.0) {
    t12_re = t178.re / 2.0;
    t12_im = 0.0;
  } else if (t178.re == 0.0) {
    t12_re = 0.0;
    t12_im = t178.im / 2.0;
  } else {
    t12_re = t178.re / 2.0;
    t12_im = t178.im / 2.0;
  }

  if (t179.im == 0.0) {
    t13_re = t179.re / 2.0;
    t13_im = 0.0;
  } else if (t179.re == 0.0) {
    t13_re = 0.0;
    t13_im = t179.im / 2.0;
  } else {
    t13_re = t179.re / 2.0;
    t13_im = t179.im / 2.0;
  }

  t23_re = t176.re * 3.061616997868383E-17 + t177.re * 3.061616997868383E-17;
  t3_im = t176.im * 3.061616997868383E-17 + t177.im * 3.061616997868383E-17;
  t12_re = (t12_re + t13_re) + 7.498798913309288E-33;
  t12_im += t13_im;
  t85_im += t34_re;
  t41_im += t34_im;
  b_t10_re = (((t174.re * 6.123233995736766E-17 + t175.re *
                6.123233995736766E-17) + (t16_re * t20_re - t16_im * t20_im)) +
              (t23_re * t12_re - t3_im * t12_im)) - 6.123233995736766E-17;
  t23_re = ((t174.im * 6.123233995736766E-17 + t175.im * 6.123233995736766E-17)
            + (t16_re * t20_im + t16_im * t20_re)) + (t23_re * t12_im + t3_im *
    t12_re);
  if (t186.im == 0.0) {
    t12_re = t186.re / 2.0;
    t3_im = 0.0;
  } else if (t186.re == 0.0) {
    t12_re = 0.0;
    t3_im = t186.im / 2.0;
  } else {
    t12_re = t186.re / 2.0;
    t3_im = t186.im / 2.0;
  }

  if (t187.im == 0.0) {
    t34_re = t187.re / 2.0;
    t34_im = 0.0;
  } else if (t187.re == 0.0) {
    t34_re = 0.0;
    t34_im = t187.im / 2.0;
  } else {
    t34_re = t187.re / 2.0;
    t34_im = t187.im / 2.0;
  }

  t12_re += t34_re;
  t3_im += t34_im;
  t13_re = (t188.re * 0.0 - t188.im * 0.5) - (t189.re * 0.0 - t189.im * 0.5);
  t13_im = (t188.re * 0.5 + t188.im * 0.0) - (t189.re * 0.5 + t189.im * 0.0);
  if (t192.im == 0.0) {
    t16_re = t192.re / 2.0;
    t16_im = 0.0;
  } else if (t192.re == 0.0) {
    t16_re = 0.0;
    t16_im = t192.im / 2.0;
  } else {
    t16_re = t192.re / 2.0;
    t16_im = t192.im / 2.0;
  }

  if (t193.im == 0.0) {
    t34_re = t193.re / 2.0;
    t34_im = 0.0;
  } else if (t193.re == 0.0) {
    t34_re = 0.0;
    t34_im = t193.im / 2.0;
  } else {
    t34_re = t193.re / 2.0;
    t34_im = t193.im / 2.0;
  }

  t20_re = (t190.re * 0.0 - t190.im * 0.5) - (t191.re * 0.0 - t191.im * 0.5);
  t20_im = (t190.re * 0.5 + t190.im * 0.0) - (t191.re * 0.5 + t191.im * 0.0);
  t16_re = (t16_re + t34_re) + 7.498798913309288E-33;
  t16_im += t34_im;
  t12_im = (t12_re * t13_re - t3_im * t13_im) - (t20_re * t16_re - t20_im *
    t16_im);
  t3_im = (t12_re * t13_im + t3_im * t13_re) - (t20_re * t16_im + t20_im *
    t16_re);
  t34_re = (t184.re * 0.0 - t184.im * 0.5) - (t185.re * 0.0 - t185.im * 0.5);
  t34_im = (t184.re * 0.5 + t184.im * 0.0) - (t185.re * 0.5 + t185.im * 0.0);
  b_t54_im = (t194.re * 0.0 - t194.im * 0.5) - (t195.re * 0.0 - t195.im * 0.5);
  t43_re = (t194.re * 0.5 + t194.im * 0.0) - (t195.re * 0.5 + t195.im * 0.0);
  t41_re = (t85_im * b_t10_re - t41_im * t23_re) + (t12_im * t34_re - t3_im *
    t34_im);
  t41_im = (t85_im * t23_re + t41_im * b_t10_re) + (t12_im * t34_im + t3_im *
    t34_re);
  t16_re = (t206.re * 0.0 - t206.im * 3.061616997868383E-17) - (t207.re * 0.0 -
    t207.im * 3.061616997868383E-17);
  t16_im = (t206.re * 3.061616997868383E-17 + t206.im * 0.0) - (t207.re *
    3.061616997868383E-17 + t207.im * 0.0);
  t20_re = (t204.re * 0.0 - t204.im * 0.5) - (t205.re * 0.0 - t205.im * 0.5);
  t20_im = (t204.re * 0.5 + t204.im * 0.0) - (t205.re * 0.5 + t205.im * 0.0);
  if (t202.im == 0.0) {
    t12_re = t202.re / 2.0;
    t12_im = 0.0;
  } else if (t202.re == 0.0) {
    t12_re = 0.0;
    t12_im = t202.im / 2.0;
  } else {
    t12_re = t202.re / 2.0;
    t12_im = t202.im / 2.0;
  }

  if (t203.im == 0.0) {
    t34_re = t203.re / 2.0;
    t34_im = 0.0;
  } else if (t203.re == 0.0) {
    t34_re = 0.0;
    t34_im = t203.im / 2.0;
  } else {
    t34_re = t203.re / 2.0;
    t34_im = t203.im / 2.0;
  }

  t23_re = t200.re * 3.061616997868383E-17 + t201.re * 3.061616997868383E-17;
  t3_im = t200.im * 3.061616997868383E-17 + t201.im * 3.061616997868383E-17;
  t12_re = (t12_re + t34_re) + 7.498798913309288E-33;
  t12_im += t34_im;
  t70_im = (t196.re * 0.0 - t196.im * 0.5) - (t197.re * 0.0 - t197.im * 0.5);
  t43_im = (t196.re * 0.5 + t196.im * 0.0) - (t197.re * 0.5 + t197.im * 0.0);
  b_t54_re = (((t198.re * 6.123233995736766E-17 + t199.re *
                6.123233995736766E-17) + (t16_re * t20_re - t16_im * t20_im)) +
              (t23_re * t12_re - t3_im * t12_im)) - 6.123233995736766E-17;
  t55_im = ((t198.im * 6.123233995736766E-17 + t199.im * 6.123233995736766E-17)
            + (t16_re * t20_im + t16_im * t20_re)) + (t23_re * t12_im + t3_im *
    t12_re);
  if (t210.im == 0.0) {
    t20_re = t210.re / 2.0;
    t70_re = 0.0;
  } else if (t210.re == 0.0) {
    t20_re = 0.0;
    t70_re = t210.im / 2.0;
  } else {
    t20_re = t210.re / 2.0;
    t70_re = t210.im / 2.0;
  }

  if (t211.im == 0.0) {
    t34_re = t211.re / 2.0;
    t34_im = 0.0;
  } else if (t211.re == 0.0) {
    t34_re = 0.0;
    t34_im = t211.im / 2.0;
  } else {
    t34_re = t211.re / 2.0;
    t34_im = t211.im / 2.0;
  }

  t20_re += t34_re;
  t70_re += t34_im;
  t23_re = (t212.re * 0.0 - t212.im * 0.5) - (t213.re * 0.0 - t213.im * 0.5);
  t3_im = (t212.re * 0.5 + t212.im * 0.0) - (t213.re * 0.5 + t213.im * 0.0);
  if (t216.im == 0.0) {
    t13_re = t216.re / 2.0;
    t13_im = 0.0;
  } else if (t216.re == 0.0) {
    t13_re = 0.0;
    t13_im = t216.im / 2.0;
  } else {
    t13_re = t216.re / 2.0;
    t13_im = t216.im / 2.0;
  }

  if (t217.im == 0.0) {
    t34_re = t217.re / 2.0;
    t34_im = 0.0;
  } else if (t217.re == 0.0) {
    t34_re = 0.0;
    t34_im = t217.im / 2.0;
  } else {
    t34_re = t217.re / 2.0;
    t34_im = t217.im / 2.0;
  }

  t16_re = (t214.re * 0.0 - t214.im * 0.5) - (t215.re * 0.0 - t215.im * 0.5);
  t16_im = (t214.re * 0.5 + t214.im * 0.0) - (t215.re * 0.5 + t215.im * 0.0);
  t13_re = (t13_re + t34_re) + 7.498798913309288E-33;
  t13_im += t34_im;
  if (t208.im == 0.0) {
    t74_re = t208.re / 2.0;
    t74_im = 0.0;
  } else if (t208.re == 0.0) {
    t74_re = 0.0;
    t74_im = t208.im / 2.0;
  } else {
    t74_re = t208.re / 2.0;
    t74_im = t208.im / 2.0;
  }

  if (t209.im == 0.0) {
    t34_re = t209.re / 2.0;
    t34_im = 0.0;
  } else if (t209.re == 0.0) {
    t34_re = 0.0;
    t34_im = t209.im / 2.0;
  } else {
    t34_re = t209.re / 2.0;
    t34_im = t209.im / 2.0;
  }

  t55_re = (t20_re * t23_re - t70_re * t3_im) - (t16_re * t13_re - t16_im *
    t13_im);
  t70_re = (t20_re * t3_im + t70_re * t23_re) - (t16_re * t13_im + t16_im *
    t13_re);
  t74_re += t34_re;
  t74_im += t34_im;
  t13_re = (t240.re * 0.0 - t240.im * 3.061616997868383E-17) - (t241.re * 0.0 -
    t241.im * 3.061616997868383E-17);
  t13_im = (t240.re * 3.061616997868383E-17 + t240.im * 0.0) - (t241.re *
    3.061616997868383E-17 + t241.im * 0.0);
  t16_re = (t238.re * 0.0 - t238.im * 0.5) - (t239.re * 0.0 - t239.im * 0.5);
  t16_im = (t238.re * 0.5 + t238.im * 0.0) - (t239.re * 0.5 + t239.im * 0.0);
  if (t236.im == 0.0) {
    t20_re = t236.re / 2.0;
    t20_im = 0.0;
  } else if (t236.re == 0.0) {
    t20_re = 0.0;
    t20_im = t236.im / 2.0;
  } else {
    t20_re = t236.re / 2.0;
    t20_im = t236.im / 2.0;
  }

  if (t237.im == 0.0) {
    t34_re = t237.re / 2.0;
    t34_im = 0.0;
  } else if (t237.re == 0.0) {
    t34_re = 0.0;
    t34_im = t237.im / 2.0;
  } else {
    t34_re = t237.re / 2.0;
    t34_im = t237.im / 2.0;
  }

  t23_re = t234.re * 3.061616997868383E-17 + t235.re * 3.061616997868383E-17;
  t3_im = t234.im * 3.061616997868383E-17 + t235.im * 3.061616997868383E-17;
  t20_re = (t20_re + t34_re) + 7.498798913309288E-33;
  t20_im += t34_im;
  t60_re = (t230.re * 0.0 - t230.im * 3.061616997868383E-17) - (t231.re * 0.0 -
    t231.im * 3.061616997868383E-17);
  t76_re = (t230.re * 3.061616997868383E-17 + t230.im * 0.0) - (t231.re *
    3.061616997868383E-17 + t231.im * 0.0);
  t72_re = (((t232.re * 6.123233995736766E-17 + t233.re * 6.123233995736766E-17)
             + (t13_re * t16_re - t13_im * t16_im)) + (t23_re * t20_re - t3_im *
             t20_im)) - 6.123233995736766E-17;
  t23_re = ((t232.im * 6.123233995736766E-17 + t233.im * 6.123233995736766E-17)
            + (t13_re * t16_im + t13_im * t16_re)) + (t23_re * t20_im + t3_im *
    t20_re);
  if (t220.im == 0.0) {
    t12_re = t220.re / 2.0;
    t58_im = 0.0;
  } else if (t220.re == 0.0) {
    t12_re = 0.0;
    t58_im = t220.im / 2.0;
  } else {
    t12_re = t220.re / 2.0;
    t58_im = t220.im / 2.0;
  }

  if (t221.im == 0.0) {
    t34_re = t221.re / 2.0;
    t34_im = 0.0;
  } else if (t221.re == 0.0) {
    t34_re = 0.0;
    t34_im = t221.im / 2.0;
  } else {
    t34_re = t221.re / 2.0;
    t34_im = t221.im / 2.0;
  }

  t12_re += t34_re;
  t58_im += t34_im;
  t13_re = (t222.re * 0.0 - t222.im * 0.5) - (t223.re * 0.0 - t223.im * 0.5);
  t13_im = (t222.re * 0.5 + t222.im * 0.0) - (t223.re * 0.5 + t223.im * 0.0);
  if (t226.im == 0.0) {
    t16_re = t226.re / 2.0;
    t16_im = 0.0;
  } else if (t226.re == 0.0) {
    t16_re = 0.0;
    t16_im = t226.im / 2.0;
  } else {
    t16_re = t226.re / 2.0;
    t16_im = t226.im / 2.0;
  }

  if (t227.im == 0.0) {
    t34_re = t227.re / 2.0;
    t34_im = 0.0;
  } else if (t227.re == 0.0) {
    t34_re = 0.0;
    t34_im = t227.im / 2.0;
  } else {
    t34_re = t227.re / 2.0;
    t34_im = t227.im / 2.0;
  }

  t20_re = (t224.re * 0.0 - t224.im * 0.5) - (t225.re * 0.0 - t225.im * 0.5);
  t20_im = (t224.re * 0.5 + t224.im * 0.0) - (t225.re * 0.5 + t225.im * 0.0);
  t16_re = (t16_re + t34_re) + 7.498798913309288E-33;
  t16_im += t34_im;
  t12_im = t228.re * 3.061616997868383E-17 + t229.re * 3.061616997868383E-17;
  b_t10_re = t228.im * 3.061616997868383E-17 + t229.im * 3.061616997868383E-17;
  t85_im = (t12_re * t13_re - t58_im * t13_im) - (t20_re * t16_re - t20_im *
    t16_im);
  t58_im = (t12_re * t13_im + t58_im * t13_re) - (t20_re * t16_im + t20_im *
    t16_re);
  if (t218.im == 0.0) {
    t34_re = t218.re / 2.0;
    t34_im = 0.0;
  } else if (t218.re == 0.0) {
    t34_re = 0.0;
    t34_im = t218.im / 2.0;
  } else {
    t34_re = t218.re / 2.0;
    t34_im = t218.im / 2.0;
  }

  if (t219.im == 0.0) {
    t13_re = t219.re / 2.0;
    t13_im = 0.0;
  } else if (t219.re == 0.0) {
    t13_re = 0.0;
    t13_im = t219.im / 2.0;
  } else {
    t13_re = t219.re / 2.0;
    t13_im = t219.im / 2.0;
  }

  t16_re = (t60_re * t72_re - t76_re * t23_re) - (t12_im * t85_im - b_t10_re *
    t58_im);
  t76_re = (t60_re * t23_re + t76_re * t72_re) - (t12_im * t58_im + b_t10_re *
    t85_im);
  t34_re += t13_re;
  t34_im += t13_im;
  b_G_q[3].re = -g * ((((b_t54_im * t41_re - t43_re * t41_im) * 0.0215 - (t70_im
    * b_t54_re - t43_im * t55_im) * 1.3164953090834051E-18) + (t55_re * t74_re -
    t70_re * t74_im) * 1.3164953090834051E-18) + (t16_re * t34_re - t76_re *
    t34_im) * 0.0215);
  b_G_q[3].im = -g * ((((b_t54_im * t41_im + t43_re * t41_re) * 0.0215 - (t70_im
    * t55_im + t43_im * b_t54_re) * 1.3164953090834051E-18) + (t55_re * t74_im +
    t70_re * t74_re) * 1.3164953090834051E-18) + (t16_re * t34_im + t76_re *
    t34_re) * 0.0215);
  if (t264.im == 0.0) {
    t70_im = t264.re / 2.0;
    t43_im = 0.0;
  } else if (t264.re == 0.0) {
    t70_im = 0.0;
    t43_im = t264.im / 2.0;
  } else {
    t70_im = t264.re / 2.0;
    t43_im = t264.im / 2.0;
  }

  if (t265.im == 0.0) {
    t76_re = t265.re / 2.0;
    t72_re = 0.0;
  } else if (t265.re == 0.0) {
    t76_re = 0.0;
    t72_re = t265.im / 2.0;
  } else {
    t76_re = t265.re / 2.0;
    t72_re = t265.im / 2.0;
  }

  t16_re = (t252.re * 0.0 - t252.im * 3.061616997868383E-17) - (t253.re * 0.0 -
    t253.im * 3.061616997868383E-17);
  t16_im = (t252.re * 3.061616997868383E-17 + t252.im * 0.0) - (t253.re *
    3.061616997868383E-17 + t253.im * 0.0);
  t20_re = (t250.re * 0.0 - t250.im * 0.5) - (t251.re * 0.0 - t251.im * 0.5);
  t20_im = (t250.re * 0.5 + t250.im * 0.0) - (t251.re * 0.5 + t251.im * 0.0);
  if (t248.im == 0.0) {
    t12_re = t248.re / 2.0;
    t12_im = 0.0;
  } else if (t248.re == 0.0) {
    t12_re = 0.0;
    t12_im = t248.im / 2.0;
  } else {
    t12_re = t248.re / 2.0;
    t12_im = t248.im / 2.0;
  }

  if (t249.im == 0.0) {
    t34_re = t249.re / 2.0;
    t34_im = 0.0;
  } else if (t249.re == 0.0) {
    t34_re = 0.0;
    t34_im = t249.im / 2.0;
  } else {
    t34_re = t249.re / 2.0;
    t34_im = t249.im / 2.0;
  }

  t23_re = t246.re * 3.061616997868383E-17 + t247.re * 3.061616997868383E-17;
  t3_im = t246.im * 3.061616997868383E-17 + t247.im * 3.061616997868383E-17;
  t12_re = (t12_re + t34_re) + 7.498798913309288E-33;
  t12_im += t34_im;
  t58_im = (t242.re * 0.0 - t242.im * 0.5) - (t243.re * 0.0 - t243.im * 0.5);
  t70_re = (t242.re * 0.5 + t242.im * 0.0) - (t243.re * 0.5 + t243.im * 0.0);
  t60_re = (((t244.re * 6.123233995736766E-17 + t245.re * 6.123233995736766E-17)
             + (t16_re * t20_re - t16_im * t20_im)) + (t23_re * t12_re - t3_im *
             t12_im)) - 6.123233995736766E-17;
  b_t10_re = ((t244.im * 6.123233995736766E-17 + t245.im * 6.123233995736766E-17)
              + (t16_re * t20_im + t16_im * t20_re)) + (t23_re * t12_im + t3_im *
    t12_re);
  if (t256.im == 0.0) {
    t20_im = t256.re / 2.0;
    t85_im = 0.0;
  } else if (t256.re == 0.0) {
    t20_im = 0.0;
    t85_im = t256.im / 2.0;
  } else {
    t20_im = t256.re / 2.0;
    t85_im = t256.im / 2.0;
  }

  if (t257.im == 0.0) {
    t34_re = t257.re / 2.0;
    t34_im = 0.0;
  } else if (t257.re == 0.0) {
    t34_re = 0.0;
    t34_im = t257.im / 2.0;
  } else {
    t34_re = t257.re / 2.0;
    t34_im = t257.im / 2.0;
  }

  t20_im += t34_re;
  t85_im += t34_im;
  t3_im = (t258.re * 0.0 - t258.im * 0.5) - (t259.re * 0.0 - t259.im * 0.5);
  t13_re = (t258.re * 0.5 + t258.im * 0.0) - (t259.re * 0.5 + t259.im * 0.0);
  if (t262.im == 0.0) {
    t13_im = t262.re / 2.0;
    t16_re = 0.0;
  } else if (t262.re == 0.0) {
    t13_im = 0.0;
    t16_re = t262.im / 2.0;
  } else {
    t13_im = t262.re / 2.0;
    t16_re = t262.im / 2.0;
  }

  if (t263.im == 0.0) {
    t34_re = t263.re / 2.0;
    t34_im = 0.0;
  } else if (t263.re == 0.0) {
    t34_re = 0.0;
    t34_im = t263.im / 2.0;
  } else {
    t34_re = t263.re / 2.0;
    t34_im = t263.im / 2.0;
  }

  t16_im = (t260.re * 0.0 - t260.im * 0.5) - (t261.re * 0.0 - t261.im * 0.5);
  t20_re = (t260.re * 0.5 + t260.im * 0.0) - (t261.re * 0.5 + t261.im * 0.0);
  t13_im = (t13_im + t34_re) + 7.498798913309288E-33;
  t16_re += t34_im;
  if (t254.im == 0.0) {
    t12_re = t254.re / 2.0;
    t12_im = 0.0;
  } else if (t254.re == 0.0) {
    t12_re = 0.0;
    t12_im = t254.im / 2.0;
  } else {
    t12_re = t254.re / 2.0;
    t12_im = t254.im / 2.0;
  }

  if (t255.im == 0.0) {
    t34_re = t255.re / 2.0;
    t34_im = 0.0;
  } else if (t255.re == 0.0) {
    t34_re = 0.0;
    t34_im = t255.im / 2.0;
  } else {
    t34_re = t255.re / 2.0;
    t34_im = t255.im / 2.0;
  }

  t23_re = (t20_im * t3_im - t85_im * t13_re) - (t16_im * t13_im - t20_re *
    t16_re);
  t85_im = (t20_im * t13_re + t85_im * t3_im) - (t16_im * t16_re + t20_re *
    t13_im);
  t12_re += t34_re;
  t12_im += t34_im;
  t70_im += t76_re;
  t43_im += t72_re;
  t55_im = (t58_im * t60_re - t70_re * b_t10_re) - (t23_re * t12_re - t85_im *
    t12_im);
  t70_re = (t58_im * b_t10_re + t70_re * t60_re) - (t23_re * t12_im + t85_im *
    t12_re);
  t72_re = (t280.re * 0.0 - t280.im * 0.5) - (t281.re * 0.0 - t281.im * 0.5);
  t74_re = (t280.re * 0.5 + t280.im * 0.0) - (t281.re * 0.5 + t281.im * 0.0);
  t74_im = (t282.re * 0.0 - t282.im * 0.5) - (t283.re * 0.0 - t283.im * 0.5);
  t55_re = (t282.re * 0.5 + t282.im * 0.0) - (t283.re * 0.5 + t283.im * 0.0);
  t12_re = (t294.re * 0.0 - t294.im * 3.061616997868383E-17) - (t295.re * 0.0 -
    t295.im * 3.061616997868383E-17);
  t12_im = (t294.re * 3.061616997868383E-17 + t294.im * 0.0) - (t295.re *
    3.061616997868383E-17 + t295.im * 0.0);
  t23_re = (t292.re * 0.0 - t292.im * 0.5) - (t293.re * 0.0 - t293.im * 0.5);
  t3_im = (t292.re * 0.5 + t292.im * 0.0) - (t293.re * 0.5 + t293.im * 0.0);
  if (t290.im == 0.0) {
    t13_re = t290.re / 2.0;
    t13_im = 0.0;
  } else if (t290.re == 0.0) {
    t13_re = 0.0;
    t13_im = t290.im / 2.0;
  } else {
    t13_re = t290.re / 2.0;
    t13_im = t290.im / 2.0;
  }

  if (t291.im == 0.0) {
    t34_re = t291.re / 2.0;
    t34_im = 0.0;
  } else if (t291.re == 0.0) {
    t34_re = 0.0;
    t34_im = t291.im / 2.0;
  } else {
    t34_re = t291.re / 2.0;
    t34_im = t291.im / 2.0;
  }

  t16_re = t288.re * 3.061616997868383E-17 + t289.re * 3.061616997868383E-17;
  t16_im = t288.im * 3.061616997868383E-17 + t289.im * 3.061616997868383E-17;
  t13_re = (t13_re + t34_re) + 7.498798913309288E-33;
  t13_im += t34_im;
  t58_im = t284.re * 3.061616997868383E-17 + t285.re * 3.061616997868383E-17;
  t60_re = t284.im * 3.061616997868383E-17 + t285.im * 3.061616997868383E-17;
  t76_re = (((t286.re * 6.123233995736766E-17 + t287.re * 6.123233995736766E-17)
             + (t12_re * t23_re - t12_im * t3_im)) + (t16_re * t13_re - t16_im *
             t13_im)) - 6.123233995736766E-17;
  t85_im = ((t286.im * 6.123233995736766E-17 + t287.im * 6.123233995736766E-17)
            + (t12_re * t3_im + t12_im * t23_re)) + (t16_re * t13_im + t16_im *
    t13_re);
  if (t270.im == 0.0) {
    t3_im = t270.re / 2.0;
    t23_re = 0.0;
  } else if (t270.re == 0.0) {
    t3_im = 0.0;
    t23_re = t270.im / 2.0;
  } else {
    t3_im = t270.re / 2.0;
    t23_re = t270.im / 2.0;
  }

  if (t271.im == 0.0) {
    t34_re = t271.re / 2.0;
    t34_im = 0.0;
  } else if (t271.re == 0.0) {
    t34_re = 0.0;
    t34_im = t271.im / 2.0;
  } else {
    t34_re = t271.re / 2.0;
    t34_im = t271.im / 2.0;
  }

  t3_im += t34_re;
  t23_re += t34_im;
  t13_re = (t272.re * 0.0 - t272.im * 0.5) - (t273.re * 0.0 - t273.im * 0.5);
  t13_im = (t272.re * 0.5 + t272.im * 0.0) - (t273.re * 0.5 + t273.im * 0.0);
  if (t276.im == 0.0) {
    t16_re = t276.re / 2.0;
    t16_im = 0.0;
  } else if (t276.re == 0.0) {
    t16_re = 0.0;
    t16_im = t276.im / 2.0;
  } else {
    t16_re = t276.re / 2.0;
    t16_im = t276.im / 2.0;
  }

  if (t277.im == 0.0) {
    t34_re = t277.re / 2.0;
    t34_im = 0.0;
  } else if (t277.re == 0.0) {
    t34_re = 0.0;
    t34_im = t277.im / 2.0;
  } else {
    t34_re = t277.re / 2.0;
    t34_im = t277.im / 2.0;
  }

  t20_re = (t274.re * 0.0 - t274.im * 0.5) - (t275.re * 0.0 - t275.im * 0.5);
  t20_im = (t274.re * 0.5 + t274.im * 0.0) - (t275.re * 0.5 + t275.im * 0.0);
  t16_re = (t16_re + t34_re) + 7.498798913309288E-33;
  t16_im += t34_im;
  t12_re = (t278.re * 0.0 - t278.im * 3.061616997868383E-17) - (t279.re * 0.0 -
    t279.im * 3.061616997868383E-17);
  t12_im = (t278.re * 3.061616997868383E-17 + t278.im * 0.0) - (t279.re *
    3.061616997868383E-17 + t279.im * 0.0);
  b_t10_re = (t3_im * t13_re - t23_re * t13_im) - (t20_re * t16_re - t20_im *
    t16_im);
  t23_re = (t3_im * t13_im + t23_re * t13_re) - (t20_re * t16_im + t20_im *
    t16_re);
  if (t296.im == 0.0) {
    t16_re = t296.re / 2.0;
    t16_im = 0.0;
  } else if (t296.re == 0.0) {
    t16_re = 0.0;
    t16_im = t296.im / 2.0;
  } else {
    t16_re = t296.re / 2.0;
    t16_im = t296.im / 2.0;
  }

  if (t297.im == 0.0) {
    t34_re = t297.re / 2.0;
    t34_im = 0.0;
  } else if (t297.re == 0.0) {
    t34_re = 0.0;
    t34_im = t297.im / 2.0;
  } else {
    t34_re = t297.re / 2.0;
    t34_im = t297.im / 2.0;
  }

  if (t298.im == 0.0) {
    t20_re = t298.re / 2.0;
    t20_im = 0.0;
  } else if (t298.re == 0.0) {
    t20_re = 0.0;
    t20_im = t298.im / 2.0;
  } else {
    t20_re = t298.re / 2.0;
    t20_im = t298.im / 2.0;
  }

  if (t299.im == 0.0) {
    t13_re = t299.re / 2.0;
    t13_im = 0.0;
  } else if (t299.re == 0.0) {
    t13_re = 0.0;
    t13_im = t299.im / 2.0;
  } else {
    t13_re = t299.re / 2.0;
    t13_im = t299.im / 2.0;
  }

  t16_re += t34_re;
  t16_im += t34_im;
  t20_re = (t20_re + t13_re) + 7.498798913309288E-33;
  t20_im += t13_im;
  t34_im = (t266.re * 0.0 - t266.im * 0.5) - (t267.re * 0.0 - t267.im * 0.5);
  t13_re = (t266.re * 0.5 + t266.im * 0.0) - (t267.re * 0.5 + t267.im * 0.0);
  t13_im = (((((t268.re * 3.749399456654644E-33 + t269.re *
                3.749399456654644E-33) - (t72_re * t74_im - t74_re * t55_re)) +
              (t58_im * t76_re - t60_re * t85_im)) + (t12_re * b_t10_re - t12_im
              * t23_re)) - (t16_re * t20_re - t16_im * t20_im)) -
    3.749399456654644E-33;
  t34_re = ((((t268.im * 3.749399456654644E-33 + t269.im * 3.749399456654644E-33)
              - (t72_re * t55_re + t74_re * t74_im)) + (t58_im * t85_im + t60_re
              * t76_re)) + (t12_re * t23_re + t12_im * b_t10_re)) - (t16_re *
    t20_im + t16_im * t20_re);
  b_G_q[4].re = -g * ((t70_im * t55_im - t43_im * t70_re) * 0.0215 + (t34_im *
    t13_im - t13_re * t34_re) * 0.0215);
  b_G_q[4].im = -g * ((t70_im * t70_re + t43_im * t55_im) * 0.0215 + (t34_im *
    t34_re + t13_re * t13_im) * 0.0215);
  b_G_q[5].re = 0.0;
  b_G_q[5].im = 0.0;
}

/*
 * File trailer for G_q.c
 *
 * [EOF]
 */
