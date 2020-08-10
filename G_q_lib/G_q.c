/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: G_q.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 04-Aug-2020 16:22:19
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
  creal_T t511;
  creal_T t510;
  creal_T t501;
  creal_T t500;
  creal_T t497;
  creal_T t496;
  creal_T t491;
  creal_T t490;
  creal_T t485;
  creal_T t484;
  creal_T t479;
  creal_T t478;
  creal_T t473;
  creal_T t472;
  creal_T t467;
  creal_T t466;
  creal_T t461;
  creal_T t460;
  creal_T t453;
  creal_T t452;
  creal_T t449;
  creal_T t448;
  creal_T t439;
  creal_T t438;
  creal_T t437;
  creal_T t436;
  creal_T t433;
  creal_T t432;
  creal_T t423;
  creal_T t422;
  creal_T t419;
  creal_T t418;
  creal_T t413;
  creal_T t412;
  creal_T t407;
  creal_T t406;
  creal_T t403;
  creal_T t402;
  creal_T t393;
  creal_T t392;
  creal_T t389;
  creal_T t388;
  creal_T t383;
  creal_T t382;
  creal_T t377;
  creal_T t376;
  creal_T t371;
  creal_T t370;
  creal_T t365;
  creal_T t364;
  creal_T t359;
  creal_T t358;
  creal_T t353;
  creal_T t352;
  creal_T t347;
  creal_T t346;
  creal_T t341;
  creal_T t340;
  creal_T t335;
  creal_T t334;
  creal_T t325;
  creal_T t324;
  creal_T t321;
  creal_T t320;
  creal_T t311;
  creal_T t310;
  creal_T t309;
  creal_T t308;
  creal_T t303;
  creal_T t302;
  creal_T t293;
  creal_T t292;
  creal_T t289;
  creal_T t288;
  creal_T t279;
  creal_T t278;
  creal_T t275;
  creal_T t274;
  creal_T t269;
  creal_T t268;
  creal_T t259;
  creal_T t258;
  creal_T t255;
  creal_T t254;
  creal_T t249;
  creal_T t248;
  creal_T t237;
  creal_T t236;
  creal_T t235;
  creal_T t234;
  creal_T t229;
  creal_T t228;
  creal_T t219;
  creal_T t218;
  creal_T t217;
  creal_T t216;
  creal_T t207;
  creal_T t206;
  creal_T t203;
  creal_T t202;
  creal_T t193;
  creal_T t192;
  creal_T t189;
  creal_T t188;
  creal_T t183;
  creal_T t182;
  creal_T t173;
  creal_T t172;
  creal_T t167;
  creal_T t166;
  creal_T t152;
  creal_T t151;
  creal_T t146;
  creal_T t145;
  creal_T t144;
  creal_T t143;
  creal_T t138;
  creal_T t137;
  creal_T t132;
  creal_T t131;
  creal_T t128;
  creal_T t127;
  creal_T t122;
  creal_T t121;
  creal_T t116;
  creal_T t115;
  creal_T t108;
  creal_T t107;
  creal_T t102;
  creal_T t101;
  creal_T t89;
  creal_T t88;
  creal_T t83;
  creal_T t82;
  creal_T t77;
  creal_T t76;
  creal_T t71;
  creal_T t70;
  creal_T t69;
  creal_T t68;
  creal_T t63;
  creal_T t62;
  creal_T t57;
  creal_T t56;
  creal_T t53;
  creal_T t52;
  creal_T t47;
  creal_T t46;
  creal_T t41;
  creal_T t40;
  creal_T t35;
  creal_T t34;
  creal_T t29;
  creal_T t28;
  creal_T t24;
  creal_T t23;
  creal_T t18;
  creal_T t17;
  creal_T t14;
  creal_T t13;
  creal_T t6;
  creal_T t5;
  creal_T t4;
  creal_T t3;
  double t508_re;
  creal_T t257;
  creal_T t256;
  creal_T t233;
  creal_T t232;
  creal_T t22;
  creal_T t21;
  creal_T t20;
  creal_T t19;
  creal_T t10;
  creal_T t16;
  creal_T t499;
  creal_T t498;
  creal_T t483;
  creal_T t482;
  creal_T t459;
  creal_T t458;
  creal_T t451;
  creal_T t450;
  creal_T t421;
  creal_T t420;
  creal_T t405;
  creal_T t404;
  creal_T t391;
  creal_T t390;
  creal_T t375;
  creal_T t374;
  creal_T t357;
  creal_T t356;
  creal_T t339;
  creal_T t338;
  creal_T t337;
  creal_T t336;
  creal_T t323;
  creal_T t322;
  creal_T t291;
  creal_T t290;
  creal_T t277;
  creal_T t276;
  creal_T t263;
  creal_T t262;
  creal_T t243;
  creal_T t242;
  creal_T t231;
  creal_T t230;
  creal_T t205;
  creal_T t204;
  creal_T t191;
  creal_T t190;
  creal_T t175;
  creal_T t174;
  creal_T t158;
  creal_T t157;
  creal_T t130;
  creal_T t129;
  creal_T t114;
  creal_T t113;
  creal_T t100;
  creal_T t99;
  creal_T t95;
  creal_T t94;
  creal_T t55;
  creal_T t54;
  creal_T t27;
  creal_T t26;
  creal_T t481;
  creal_T t480;
  creal_T t435;
  creal_T t434;
  creal_T t373;
  creal_T t372;
  creal_T t355;
  creal_T t354;
  creal_T t261;
  creal_T t260;
  creal_T t177;
  creal_T t176;
  creal_T t98;
  creal_T t97;
  creal_T dc;
  creal_T dc1;
  creal_T dc2;
  creal_T dc3;
  creal_T dc4;
  creal_T dc5;
  creal_T dc6;
  creal_T dc7;
  creal_T dc8;
  creal_T dc9;
  creal_T dc10;
  creal_T dc11;
  creal_T dc12;
  creal_T dc13;
  creal_T dc14;
  creal_T dc15;
  creal_T dc16;
  creal_T dc17;
  creal_T dc18;
  creal_T dc19;
  creal_T dc20;
  creal_T dc21;
  creal_T dc22;
  creal_T dc23;
  creal_T dc24;
  creal_T dc25;
  creal_T dc26;
  creal_T dc27;
  creal_T dc28;
  creal_T dc29;
  creal_T dc30;
  creal_T dc31;
  creal_T dc32;
  creal_T dc33;
  creal_T dc34;
  creal_T dc35;
  creal_T dc36;
  creal_T dc37;
  creal_T dc38;
  creal_T dc39;
  creal_T dc40;
  creal_T dc41;
  creal_T dc42;
  creal_T dc43;
  creal_T dc44;
  creal_T dc45;
  creal_T dc46;
  creal_T dc47;
  creal_T dc48;
  creal_T dc49;
  creal_T dc50;
  creal_T dc51;
  creal_T dc52;
  creal_T dc53;
  creal_T dc54;
  creal_T dc55;
  creal_T dc56;
  creal_T dc57;
  creal_T dc58;
  creal_T dc59;
  creal_T dc60;
  creal_T dc61;
  creal_T dc62;
  creal_T t282;
  creal_T t280;
  creal_T t240;
  creal_T t238;
  creal_T t226;
  creal_T t224;
  creal_T t222;
  creal_T t220;
  creal_T t170;
  creal_T t168;
  creal_T t164;
  creal_T t162;
  creal_T t300;
  creal_T t298;
  creal_T t296;
  creal_T t294;
  creal_T t214;
  creal_T t212;
  creal_T t210;
  creal_T t208;
  creal_T t200;
  creal_T t198;
  creal_T t196;
  creal_T t194;
  creal_T t186;
  creal_T t184;
  creal_T t180;
  creal_T t178;
  creal_T t50;
  creal_T t48;
  creal_T t44;
  creal_T t42;
  creal_T t141;
  creal_T t139;
  creal_T t135;
  creal_T t133;
  creal_T t149;
  creal_T t147;
  creal_T t155;
  creal_T t153;
  creal_T t38;
  creal_T t36;
  creal_T t32;
  creal_T t30;
  creal_T t66;
  creal_T t64;
  creal_T t60;
  creal_T t58;
  creal_T t80;
  creal_T t78;
  creal_T t74;
  creal_T t72;
  creal_T t92;
  creal_T t90;
  creal_T t86;
  creal_T t84;
  creal_T t111;
  creal_T t109;
  creal_T t105;
  creal_T t103;
  creal_T t125;
  creal_T t123;
  creal_T t119;
  creal_T t117;
  creal_T t11;
  double t17_re;
  double t17_im;
  double t18_im;
  double t19_re;
  double t19_im;
  double t21_re;
  double t21_im;
  double t23_re;
  double t23_im;
  double t121_re;
  double t121_im;
  double re;
  double im;
  double t127_re;
  double t127_im;
  double b_re;
  double b_im;
  double t113_re;
  double t113_im;
  double t115_re;
  double t115_im;
  double t99_re;
  double t99_im;
  double c_re;
  double t97_re;
  double t97_im;
  double b_t113_re;
  double b_t97_re;
  double b_t97_im;
  double t98_re;
  double t98_im;
  double t94_im;
  double t70_re;
  double c_im;
  double d_re;
  double d_im;
  double t76_im;
  double e_re;
  double t52_re;
  double t52_im;
  double t26_re;
  double t26_im;
  double t152_im;
  double t152_re;
  double t158_re_tmp;
  double t158_re;
  double t158_im_tmp;
  double t158_im;
  double t129_re;
  double t129_im;
  double t131_re;
  double t40_im;
  if (isInitialized_G_q == false) {
    G_q_initialize();
  }

  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     04-Aug-2020 16:21:08 */
  t511.re = theta2 * 0.0;
  t511.im = theta2;
  t510.re = -t511.re;
  t510.im = -theta2;
  t501.re = t511.re;
  t501.im = theta2;
  t500.re = -t511.re;
  t500.im = -theta2;
  t497.re = t511.re;
  t497.im = theta2;
  t496.re = -t511.re;
  t496.im = -theta2;
  t491.re = t511.re;
  t491.im = theta2;
  t490.re = -t511.re;
  t490.im = -theta2;
  t485.re = t511.re;
  t485.im = theta2;
  t484.re = -t511.re;
  t484.im = -theta2;
  t479.re = t511.re;
  t479.im = theta2;
  t478.re = -t511.re;
  t478.im = -theta2;
  t473.re = t511.re;
  t473.im = theta2;
  t472.re = -t511.re;
  t472.im = -theta2;
  t467.re = t511.re;
  t467.im = theta2;
  t466.re = -t511.re;
  t466.im = -theta2;
  t461.re = t511.re;
  t461.im = theta2;
  t460.re = -t511.re;
  t460.im = -theta2;
  t453.re = t511.re;
  t453.im = theta2;
  t452.re = -t511.re;
  t452.im = -theta2;
  t449.re = t511.re;
  t449.im = theta2;
  t448.re = -t511.re;
  t448.im = -theta2;
  t439.re = t511.re;
  t439.im = theta2;
  t438.re = -t511.re;
  t438.im = -theta2;
  t437.re = t511.re;
  t437.im = theta2;
  t436.re = -t511.re;
  t436.im = -theta2;
  t433.re = t511.re;
  t433.im = theta2;
  t432.re = -t511.re;
  t432.im = -theta2;
  t423.re = t511.re;
  t423.im = theta2;
  t422.re = -t511.re;
  t422.im = -theta2;
  t419.re = t511.re;
  t419.im = theta2;
  t418.re = -t511.re;
  t418.im = -theta2;
  t413.re = t511.re;
  t413.im = theta2;
  t412.re = -t511.re;
  t412.im = -theta2;
  t407.re = t511.re;
  t407.im = theta2;
  t406.re = -t511.re;
  t406.im = -theta2;
  t403.re = t511.re;
  t403.im = theta2;
  t402.re = -t511.re;
  t402.im = -theta2;
  t393.re = t511.re;
  t393.im = theta2;
  t392.re = -t511.re;
  t392.im = -theta2;
  t389.re = t511.re;
  t389.im = theta2;
  t388.re = -t511.re;
  t388.im = -theta2;
  t383.re = t511.re;
  t383.im = theta2;
  t382.re = -t511.re;
  t382.im = -theta2;
  t377.re = t511.re;
  t377.im = theta2;
  t376.re = -t511.re;
  t376.im = -theta2;
  t371.re = t511.re;
  t371.im = theta2;
  t370.re = -t511.re;
  t370.im = -theta2;
  t365.re = t511.re;
  t365.im = theta2;
  t364.re = -t511.re;
  t364.im = -theta2;
  t359.re = t511.re;
  t359.im = theta2;
  t358.re = -t511.re;
  t358.im = -theta2;
  t353.re = t511.re;
  t353.im = theta2;
  t352.re = -t511.re;
  t352.im = -theta2;
  t347.re = t511.re;
  t347.im = theta2;
  t346.re = -t511.re;
  t346.im = -theta2;
  t341.re = t511.re;
  t341.im = theta2;
  t340.re = -t511.re;
  t340.im = -theta2;
  t335.re = t511.re;
  t335.im = theta2;
  t334.re = -t511.re;
  t334.im = -theta2;
  t325.re = t511.re;
  t325.im = theta2;
  t324.re = -t511.re;
  t324.im = -theta2;
  t321.re = t511.re;
  t321.im = theta2;
  t320.re = -t511.re;
  t320.im = -theta2;
  t311.re = t511.re;
  t311.im = theta2;
  t310.re = -t511.re;
  t310.im = -theta2;
  t309.re = t511.re;
  t309.im = theta2;
  t308.re = -t511.re;
  t308.im = -theta2;
  t303.re = t511.re;
  t303.im = theta2;
  t302.re = -t511.re;
  t302.im = -theta2;
  t293.re = t511.re;
  t293.im = theta2;
  t292.re = -t511.re;
  t292.im = -theta2;
  t289.re = t511.re;
  t289.im = theta2;
  t288.re = -t511.re;
  t288.im = -theta2;
  t279.re = t511.re;
  t279.im = theta2;
  t278.re = -t511.re;
  t278.im = -theta2;
  t275.re = t511.re;
  t275.im = theta2;
  t274.re = -t511.re;
  t274.im = -theta2;
  t269.re = t511.re;
  t269.im = theta2;
  t268.re = -t511.re;
  t268.im = -theta2;
  t259.re = t511.re;
  t259.im = theta2;
  t258.re = -t511.re;
  t258.im = -theta2;
  t255.re = t511.re;
  t255.im = theta2;
  t254.re = -t511.re;
  t254.im = -theta2;
  t249.re = t511.re;
  t249.im = theta2;
  t248.re = -t511.re;
  t248.im = -theta2;
  t237.re = t511.re;
  t237.im = theta2;
  t236.re = -t511.re;
  t236.im = -theta2;
  t235.re = t511.re;
  t235.im = theta2;
  t234.re = -t511.re;
  t234.im = -theta2;
  t229.re = t511.re;
  t229.im = theta2;
  t228.re = -t511.re;
  t228.im = -theta2;
  t219.re = t511.re;
  t219.im = theta2;
  t218.re = -t511.re;
  t218.im = -theta2;
  t217.re = t511.re;
  t217.im = theta2;
  t216.re = -t511.re;
  t216.im = -theta2;
  t207.re = t511.re;
  t207.im = theta2;
  t206.re = -t511.re;
  t206.im = -theta2;
  t203.re = t511.re;
  t203.im = theta2;
  t202.re = -t511.re;
  t202.im = -theta2;
  t193.re = t511.re;
  t193.im = theta2;
  t192.re = -t511.re;
  t192.im = -theta2;
  t189.re = t511.re;
  t189.im = theta2;
  t188.re = -t511.re;
  t188.im = -theta2;
  t183.re = t511.re;
  t183.im = theta2;
  t182.re = -t511.re;
  t182.im = -theta2;
  t173.re = t511.re;
  t173.im = theta2;
  t172.re = -t511.re;
  t172.im = -theta2;
  t167.re = t511.re;
  t167.im = theta2;
  t166.re = -t511.re;
  t166.im = -theta2;
  t152.re = t511.re;
  t152.im = theta2;
  t151.re = -t511.re;
  t151.im = -theta2;
  t146.re = t511.re;
  t146.im = theta2;
  t145.re = -t511.re;
  t145.im = -theta2;
  t144.re = t511.re;
  t144.im = theta2;
  t143.re = -t511.re;
  t143.im = -theta2;
  t138.re = t511.re;
  t138.im = theta2;
  t137.re = -t511.re;
  t137.im = -theta2;
  t132.re = t511.re;
  t132.im = theta2;
  t131.re = -t511.re;
  t131.im = -theta2;
  t128.re = t511.re;
  t128.im = theta2;
  t127.re = -t511.re;
  t127.im = -theta2;
  t122.re = t511.re;
  t122.im = theta2;
  t121.re = -t511.re;
  t121.im = -theta2;
  t116.re = t511.re;
  t116.im = theta2;
  t115.re = -t511.re;
  t115.im = -theta2;
  t108.re = t511.re;
  t108.im = theta2;
  t107.re = -t511.re;
  t107.im = -theta2;
  t102.re = t511.re;
  t102.im = theta2;
  t101.re = -t511.re;
  t101.im = -theta2;
  t89.re = t511.re;
  t89.im = theta2;
  t88.re = -t511.re;
  t88.im = -theta2;
  t83.re = t511.re;
  t83.im = theta2;
  t82.re = -t511.re;
  t82.im = -theta2;
  t77.re = t511.re;
  t77.im = theta2;
  t76.re = -t511.re;
  t76.im = -theta2;
  t71.re = t511.re;
  t71.im = theta2;
  t70.re = -t511.re;
  t70.im = -theta2;
  t69.re = t511.re;
  t69.im = theta2;
  t68.re = -t511.re;
  t68.im = -theta2;
  t63.re = t511.re;
  t63.im = theta2;
  t62.re = -t511.re;
  t62.im = -theta2;
  t57.re = t511.re;
  t57.im = theta2;
  t56.re = -t511.re;
  t56.im = -theta2;
  t53.re = t511.re;
  t53.im = theta2;
  t52.re = -t511.re;
  t52.im = -theta2;
  t47.re = t511.re;
  t47.im = theta2;
  t46.re = -t511.re;
  t46.im = -theta2;
  t41.re = t511.re;
  t41.im = theta2;
  t40.re = -t511.re;
  t40.im = -theta2;
  t35.re = t511.re;
  t35.im = theta2;
  t34.re = -t511.re;
  t34.im = -theta2;
  t29.re = t511.re;
  t29.im = theta2;
  t28.re = -t511.re;
  t28.im = -theta2;
  t24.re = t511.re;
  t24.im = theta2;
  t23.re = -t511.re;
  t23.im = -theta2;
  t18.re = t511.re;
  t18.im = theta2;
  t17.re = -t511.re;
  t17.im = -theta2;
  t14.re = t511.re;
  t14.im = theta2;
  t13.re = -t511.re;
  t13.im = -theta2;
  t6.re = t511.re;
  t6.im = theta2;
  t5.re = -t511.re;
  t5.im = -theta2;
  t4.re = t511.re;
  t4.im = theta2;
  t3.re = -t511.re;
  t3.im = -theta2;
  b_exp(&t3);
  t508_re = theta3 * 0.0;
  t257.re = t508_re;
  t257.im = theta3;
  t256.re = -t508_re;
  t256.im = -theta3;
  t233.re = t508_re;
  t233.im = theta3;
  t232.re = -t508_re;
  t232.im = -theta3;
  t22.re = t508_re;
  t22.im = theta3;
  t21.re = -t508_re;
  t21.im = -theta3;
  t20.re = t508_re;
  t20.im = theta3;
  t19.re = -t508_re;
  t19.im = -theta3;
  t10.re = -t508_re;
  t10.im = -theta3 + -1.5707963267948966;
  b_exp(&t10);
  t16.re = t508_re;
  t16.im = theta3 + 1.5707963267948966;
  b_exp(&t16);
  t499.re = theta4 * 0.0;
  t499.im = theta4;
  t498.re = -t499.re;
  t498.im = -theta4;
  t483.re = t499.re;
  t483.im = theta4;
  t482.re = -t499.re;
  t482.im = -theta4;
  t459.re = t499.re;
  t459.im = theta4;
  t458.re = -t499.re;
  t458.im = -theta4;
  t451.re = t499.re;
  t451.im = theta4;
  t450.re = -t499.re;
  t450.im = -theta4;
  t421.re = t499.re;
  t421.im = theta4;
  t420.re = -t499.re;
  t420.im = -theta4;
  t405.re = t499.re;
  t405.im = theta4;
  t404.re = -t499.re;
  t404.im = -theta4;
  t391.re = t499.re;
  t391.im = theta4;
  t390.re = -t499.re;
  t390.im = -theta4;
  t375.re = t499.re;
  t375.im = theta4;
  t374.re = -t499.re;
  t374.im = -theta4;
  t357.re = t499.re;
  t357.im = theta4;
  t356.re = -t499.re;
  t356.im = -theta4;
  t339.re = t499.re;
  t339.im = theta4;
  t338.re = -t499.re;
  t338.im = -theta4;
  t337.re = t499.re;
  t337.im = theta4;
  t336.re = -t499.re;
  t336.im = -theta4;
  t323.re = t499.re;
  t323.im = theta4;
  t322.re = -t499.re;
  t322.im = -theta4;
  t291.re = t499.re;
  t291.im = theta4;
  t290.re = -t499.re;
  t290.im = -theta4;
  t277.re = t499.re;
  t277.im = theta4;
  t276.re = -t499.re;
  t276.im = -theta4;
  t263.re = t499.re;
  t263.im = theta4;
  t262.re = -t499.re;
  t262.im = -theta4;
  t243.re = t499.re;
  t243.im = theta4;
  t242.re = -t499.re;
  t242.im = -theta4;
  t231.re = t499.re;
  t231.im = theta4;
  t230.re = -t499.re;
  t230.im = -theta4;
  t205.re = t499.re;
  t205.im = theta4;
  t204.re = -t499.re;
  t204.im = -theta4;
  t191.re = t499.re;
  t191.im = theta4;
  t190.re = -t499.re;
  t190.im = -theta4;
  t175.re = t499.re;
  t175.im = theta4;
  t174.re = -t499.re;
  t174.im = -theta4;
  t158.re = t499.re;
  t158.im = theta4;
  t157.re = -t499.re;
  t157.im = -theta4;
  t130.re = t499.re;
  t130.im = theta4;
  t129.re = -t499.re;
  t129.im = -theta4;
  t114.re = t499.re;
  t114.im = theta4;
  t113.re = -t499.re;
  t113.im = -theta4;
  t100.re = t499.re;
  t100.im = theta4;
  t99.re = -t499.re;
  t99.im = -theta4;
  t95.re = t499.re;
  t95.im = theta4;
  t94.re = -t499.re;
  t94.im = -theta4;
  t55.re = t499.re;
  t55.im = theta4;
  t54.re = -t499.re;
  t54.im = -theta4;
  t27.re = t499.re;
  t27.im = theta4;
  t26.re = -t499.re;
  t26.im = -theta4;
  b_exp(&t26);
  t481.re = theta5 * 0.0;
  t481.im = theta5;
  t480.re = -t481.re;
  t480.im = -theta5;
  t435.re = t481.re;
  t435.im = theta5;
  t434.re = -t481.re;
  t434.im = -theta5;
  t373.re = t481.re;
  t373.im = theta5;
  t372.re = -t481.re;
  t372.im = -theta5;
  t355.re = t481.re;
  t355.im = theta5;
  t354.re = -t481.re;
  t354.im = -theta5;
  t261.re = t481.re;
  t261.im = theta5;
  t260.re = -t481.re;
  t260.im = -theta5;
  t177.re = t481.re;
  t177.im = theta5;
  t176.re = -t481.re;
  t176.im = -theta5;
  t98.re = t481.re;
  t98.im = theta5;
  t97.re = -t481.re;
  t97.im = -theta5;
  b_exp(&t97);
  b_exp(&t152);
  b_exp(&t98);
  b_exp(&t158);
  b_exp(&t17);
  b_exp(&t18);
  b_exp(&t19);
  b_exp(&t20);
  b_exp(&t21);
  b_exp(&t22);
  b_exp(&t23);
  b_exp(&t24);
  b_exp(&t113);
  b_exp(&t114);
  b_exp(&t115);
  b_exp(&t116);
  b_exp(&t121);
  b_exp(&t122);
  dc.re = -t508_re;
  dc.im = -theta3 + -1.5707963267948966;
  b_exp(&dc);
  dc1.re = t508_re;
  dc1.im = theta3 + 1.5707963267948966;
  b_exp(&dc1);
  b_exp(&t127);
  b_exp(&t128);
  dc2.re = -t508_re;
  dc2.im = -theta3 + -1.5707963267948966;
  b_exp(&dc2);
  dc3.re = t508_re;
  dc3.im = theta3 + 1.5707963267948966;
  b_exp(&dc3);
  dc4.re = -t508_re;
  dc4.im = -theta3 + -1.5707963267948966;
  b_exp(&dc4);
  dc5.re = t508_re;
  dc5.im = theta3 + 1.5707963267948966;
  b_exp(&dc5);
  b_exp(&t101);
  b_exp(&t102);
  dc6.re = -t508_re;
  dc6.im = -theta3 + -1.5707963267948966;
  b_exp(&dc6);
  dc7.re = t508_re;
  dc7.im = theta3 + 1.5707963267948966;
  b_exp(&dc7);
  b_exp(&t107);
  b_exp(&t108);
  b_exp(&t99);
  b_exp(&t100);
  b_exp(&t52);
  b_exp(&t53);
  b_exp(&t94);
  b_exp(&t95);
  dc8.re = -t508_re;
  dc8.im = -theta3 + -1.5707963267948966;
  b_exp(&dc8);
  dc9.re = t508_re;
  dc9.im = theta3 + 1.5707963267948966;
  b_exp(&dc9);
  b_exp(&t82);
  b_exp(&t83);
  dc10.re = -t508_re;
  dc10.im = -theta3 + -1.5707963267948966;
  b_exp(&dc10);
  dc11.re = t508_re;
  dc11.im = theta3 + 1.5707963267948966;
  b_exp(&dc11);
  b_exp(&t88);
  b_exp(&t89);
  dc12.re = -t508_re;
  dc12.im = -theta3 + -1.5707963267948966;
  b_exp(&dc12);
  dc13.re = t508_re;
  dc13.im = theta3 + 1.5707963267948966;
  b_exp(&dc13);
  b_exp(&t70);
  b_exp(&t71);
  dc14.re = -t508_re;
  dc14.im = -theta3 + -1.5707963267948966;
  b_exp(&dc14);
  dc15.re = t508_re;
  dc15.im = theta3 + 1.5707963267948966;
  b_exp(&dc15);
  b_exp(&t76);
  b_exp(&t77);
  b_exp(&t54);
  b_exp(&t55);
  b_exp(&t56);
  b_exp(&t57);
  b_exp(&t62);
  b_exp(&t63);
  dc16.re = -t508_re;
  dc16.im = -theta3 + -1.5707963267948966;
  b_exp(&dc16);
  dc17.re = t508_re;
  dc17.im = theta3 + 1.5707963267948966;
  b_exp(&dc17);
  b_exp(&t68);
  b_exp(&t69);
  dc18.re = -t508_re;
  dc18.im = -theta3 + -1.5707963267948966;
  b_exp(&dc18);
  dc19.re = t508_re;
  dc19.im = theta3 + 1.5707963267948966;
  b_exp(&dc19);
  b_exp(&t27);
  dc20.re = -t508_re;
  dc20.im = -theta3 + -1.5707963267948966;
  b_exp(&dc20);
  dc21.re = t508_re;
  dc21.im = theta3 + 1.5707963267948966;
  b_exp(&dc21);
  b_exp(&t28);
  b_exp(&t29);
  dc22.re = -t508_re;
  dc22.im = -theta3 + -1.5707963267948966;
  b_exp(&dc22);
  dc23.re = t508_re;
  dc23.im = theta3 + 1.5707963267948966;
  b_exp(&dc23);
  b_exp(&t34);
  b_exp(&t35);
  b_exp(&t151);
  dc24.re = -t508_re;
  dc24.im = -theta3 + -1.5707963267948966;
  b_exp(&dc24);
  dc25.re = t508_re;
  dc25.im = theta3 + 1.5707963267948966;
  b_exp(&dc25);
  dc26.re = -t508_re;
  dc26.im = -theta3 + -1.5707963267948966;
  b_exp(&dc26);
  dc27.re = t508_re;
  dc27.im = theta3 + 1.5707963267948966;
  b_exp(&dc27);
  b_exp(&t145);
  b_exp(&t146);
  b_exp(&t157);
  b_exp(&t129);
  b_exp(&t130);
  b_exp(&t131);
  b_exp(&t132);
  b_exp(&t137);
  b_exp(&t138);
  dc28.re = -t508_re;
  dc28.im = -theta3 + -1.5707963267948966;
  b_exp(&dc28);
  dc29.re = t508_re;
  dc29.im = theta3 + 1.5707963267948966;
  b_exp(&dc29);
  b_exp(&t143);
  b_exp(&t144);
  dc30.re = -t508_re;
  dc30.im = -theta3 + -1.5707963267948966;
  b_exp(&dc30);
  dc31.re = t508_re;
  dc31.im = theta3 + 1.5707963267948966;
  b_exp(&dc31);
  dc32.re = -t508_re;
  dc32.im = -theta3 + -1.5707963267948966;
  b_exp(&dc32);
  dc33.re = t508_re;
  dc33.im = theta3 + 1.5707963267948966;
  b_exp(&dc33);
  b_exp(&t40);
  b_exp(&t41);
  dc34.re = -t508_re;
  dc34.im = -theta3 + -1.5707963267948966;
  b_exp(&dc34);
  dc35.re = t508_re;
  dc35.im = theta3 + 1.5707963267948966;
  b_exp(&dc35);
  b_exp(&t46);
  b_exp(&t47);
  b_exp(&t4);
  b_exp(&t5);
  b_exp(&t6);
  b_exp(&t13);
  b_exp(&t14);
  b_exp(&t232);
  b_exp(&t233);
  b_exp(&t234);
  b_exp(&t235);
  b_exp(&t176);
  b_exp(&t177);
  b_exp(&t190);
  b_exp(&t191);
  b_exp(&t182);
  b_exp(&t183);
  dc36.re = -t508_re;
  dc36.im = -theta3 + -1.5707963267948966;
  b_exp(&dc36);
  dc37.re = t508_re;
  dc37.im = theta3 + 1.5707963267948966;
  b_exp(&dc37);
  dc38.re = -t508_re;
  dc38.im = -theta3 + -1.5707963267948966;
  b_exp(&dc38);
  dc39.re = t508_re;
  dc39.im = theta3 + 1.5707963267948966;
  b_exp(&dc39);
  b_exp(&t188);
  b_exp(&t189);
  b_exp(&t204);
  b_exp(&t205);
  dc40.re = -t508_re;
  dc40.im = -theta3 + -1.5707963267948966;
  b_exp(&dc40);
  dc41.re = t508_re;
  dc41.im = theta3 + 1.5707963267948966;
  b_exp(&dc41);
  b_exp(&t192);
  b_exp(&t193);
  dc42.re = -t508_re;
  dc42.im = -theta3 + -1.5707963267948966;
  b_exp(&dc42);
  dc43.re = t508_re;
  dc43.im = theta3 + 1.5707963267948966;
  b_exp(&dc43);
  b_exp(&t202);
  b_exp(&t203);
  dc44.re = -t508_re;
  dc44.im = -theta3 + -1.5707963267948966;
  b_exp(&dc44);
  dc45.re = t508_re;
  dc45.im = theta3 + 1.5707963267948966;
  b_exp(&dc45);
  b_exp(&t206);
  b_exp(&t207);
  dc46.re = -t508_re;
  dc46.im = -theta3 + -1.5707963267948966;
  b_exp(&dc46);
  dc47.re = t508_re;
  dc47.im = theta3 + 1.5707963267948966;
  b_exp(&dc47);
  b_exp(&t216);
  b_exp(&t217);
  b_exp(&t290);
  b_exp(&t291);
  dc48.re = -t508_re;
  dc48.im = -theta3 + -1.5707963267948966;
  b_exp(&dc48);
  dc49.re = t508_re;
  dc49.im = theta3 + 1.5707963267948966;
  b_exp(&dc49);
  b_exp(&t292);
  b_exp(&t293);
  dc50.re = -t508_re;
  dc50.im = -theta3 + -1.5707963267948966;
  b_exp(&dc50);
  dc51.re = t508_re;
  dc51.im = theta3 + 1.5707963267948966;
  b_exp(&dc51);
  b_exp(&t302);
  b_exp(&t303);
  b_exp(&t256);
  b_exp(&t257);
  b_exp(&t258);
  b_exp(&t259);
  b_exp(&t174);
  b_exp(&t175);
  b_exp(&t166);
  b_exp(&t167);
  dc52.re = -t508_re;
  dc52.im = -theta3 + -1.5707963267948966;
  b_exp(&dc52);
  dc53.re = t508_re;
  dc53.im = theta3 + 1.5707963267948966;
  b_exp(&dc53);
  dc54.re = -t508_re;
  dc54.im = -theta3 + -1.5707963267948966;
  b_exp(&dc54);
  dc55.re = t508_re;
  dc55.im = theta3 + 1.5707963267948966;
  b_exp(&dc55);
  b_exp(&t172);
  b_exp(&t173);
  b_exp(&t230);
  b_exp(&t231);
  dc56.re = -t508_re;
  dc56.im = -theta3 + -1.5707963267948966;
  b_exp(&dc56);
  dc57.re = t508_re;
  dc57.im = theta3 + 1.5707963267948966;
  b_exp(&dc57);
  b_exp(&t218);
  b_exp(&t219);
  dc58.re = -t508_re;
  dc58.im = -theta3 + -1.5707963267948966;
  b_exp(&dc58);
  dc59.re = t508_re;
  dc59.im = theta3 + 1.5707963267948966;
  b_exp(&dc59);
  b_exp(&t228);
  b_exp(&t229);
  dc60.re = -t508_re;
  dc60.im = -theta3 + -1.5707963267948966;
  b_exp(&dc60);
  dc61.re = t508_re;
  dc61.im = theta3 + 1.5707963267948966;
  b_exp(&dc61);
  b_exp(&t236);
  b_exp(&t237);
  b_exp(&t276);
  b_exp(&t277);
  dc62.re = -t508_re;
  dc62.im = -theta3 + -1.5707963267948966;
  b_exp(&dc62);
  t282.re = t508_re;
  t282.im = theta3 + 1.5707963267948966;
  b_exp(&t282);
  b_exp(&t278);
  b_exp(&t279);
  t280.re = -t508_re;
  t280.im = -theta3 + -1.5707963267948966;
  b_exp(&t280);
  t240.re = t508_re;
  t240.im = theta3 + 1.5707963267948966;
  b_exp(&t240);
  b_exp(&t288);
  b_exp(&t289);
  b_exp(&t268);
  b_exp(&t269);
  t238.re = -t508_re;
  t238.im = -theta3 + -1.5707963267948966;
  b_exp(&t238);
  t226.re = t508_re;
  t226.im = theta3 + 1.5707963267948966;
  b_exp(&t226);
  t224.re = -t508_re;
  t224.im = -theta3 + -1.5707963267948966;
  b_exp(&t224);
  t222.re = t508_re;
  t222.im = theta3 + 1.5707963267948966;
  b_exp(&t222);
  b_exp(&t274);
  b_exp(&t275);
  b_exp(&t262);
  b_exp(&t263);
  b_exp(&t260);
  b_exp(&t261);
  t220.re = -t508_re;
  t220.im = -theta3 + -1.5707963267948966;
  b_exp(&t220);
  t170.re = t508_re;
  t170.im = theta3 + 1.5707963267948966;
  b_exp(&t170);
  b_exp(&t308);
  b_exp(&t309);
  b_exp(&t248);
  b_exp(&t249);
  t168.re = -t508_re;
  t168.im = -theta3 + -1.5707963267948966;
  b_exp(&t168);
  t164.re = t508_re;
  t164.im = theta3 + 1.5707963267948966;
  b_exp(&t164);
  t162.re = -t508_re;
  t162.im = -theta3 + -1.5707963267948966;
  b_exp(&t162);
  t300.re = t508_re;
  t300.im = theta3 + 1.5707963267948966;
  b_exp(&t300);
  b_exp(&t254);
  b_exp(&t255);
  b_exp(&t242);
  b_exp(&t243);
  b_exp(&t356);
  b_exp(&t357);
  b_exp(&t358);
  b_exp(&t359);
  b_exp(&t364);
  b_exp(&t365);
  t298.re = -t508_re;
  t298.im = -theta3 + -1.5707963267948966;
  b_exp(&t298);
  t296.re = t508_re;
  t296.im = theta3 + 1.5707963267948966;
  b_exp(&t296);
  t294.re = -t508_re;
  t294.im = -theta3 + -1.5707963267948966;
  b_exp(&t294);
  t214.re = t508_re;
  t214.im = theta3 + 1.5707963267948966;
  b_exp(&t214);
  b_exp(&t370);
  b_exp(&t371);
  b_exp(&t420);
  b_exp(&t421);
  t212.re = -t508_re;
  t212.im = -theta3 + -1.5707963267948966;
  b_exp(&t212);
  t210.re = t508_re;
  t210.im = theta3 + 1.5707963267948966;
  b_exp(&t210);
  b_exp(&t422);
  b_exp(&t423);
  t208.re = -t508_re;
  t208.im = -theta3 + -1.5707963267948966;
  b_exp(&t208);
  t200.re = t508_re;
  t200.im = theta3 + 1.5707963267948966;
  b_exp(&t200);
  b_exp(&t432);
  b_exp(&t433);
  b_exp(&t404);
  b_exp(&t405);
  b_exp(&t406);
  b_exp(&t407);
  b_exp(&t412);
  b_exp(&t413);
  t198.re = -t508_re;
  t198.im = -theta3 + -1.5707963267948966;
  b_exp(&t198);
  t196.re = t508_re;
  t196.im = theta3 + 1.5707963267948966;
  b_exp(&t196);
  t194.re = -t508_re;
  t194.im = -theta3 + -1.5707963267948966;
  b_exp(&t194);
  t186.re = t508_re;
  t186.im = theta3 + 1.5707963267948966;
  b_exp(&t186);
  b_exp(&t418);
  b_exp(&t419);
  b_exp(&t338);
  b_exp(&t339);
  b_exp(&t340);
  b_exp(&t341);
  b_exp(&t346);
  b_exp(&t347);
  t184.re = -t508_re;
  t184.im = -theta3 + -1.5707963267948966;
  b_exp(&t184);
  t180.re = t508_re;
  t180.im = theta3 + 1.5707963267948966;
  b_exp(&t180);
  t178.re = -t508_re;
  t178.im = -theta3 + -1.5707963267948966;
  b_exp(&t178);
  t50.re = t508_re;
  t50.im = theta3 + 1.5707963267948966;
  b_exp(&t50);
  b_exp(&t352);
  b_exp(&t353);
  b_exp(&t336);
  b_exp(&t337);
  t48.re = -t508_re;
  t48.im = -theta3 + -1.5707963267948966;
  b_exp(&t48);
  t44.re = t508_re;
  t44.im = theta3 + 1.5707963267948966;
  b_exp(&t44);
  b_exp(&t324);
  b_exp(&t325);
  t42.re = -t508_re;
  t42.im = -theta3 + -1.5707963267948966;
  b_exp(&t42);
  t141.re = t508_re;
  t141.im = theta3 + 1.5707963267948966;
  b_exp(&t141);
  b_exp(&t334);
  b_exp(&t335);
  b_exp(&t354);
  b_exp(&t355);
  b_exp(&t322);
  b_exp(&t323);
  t139.re = -t508_re;
  t139.im = -theta3 + -1.5707963267948966;
  b_exp(&t139);
  t135.re = t508_re;
  t135.im = theta3 + 1.5707963267948966;
  b_exp(&t135);
  b_exp(&t310);
  b_exp(&t311);
  t133.re = -t508_re;
  t133.im = -theta3 + -1.5707963267948966;
  b_exp(&t133);
  t149.re = t508_re;
  t149.im = theta3 + 1.5707963267948966;
  b_exp(&t149);
  b_exp(&t320);
  b_exp(&t321);
  b_exp(&t374);
  b_exp(&t375);
  b_exp(&t376);
  b_exp(&t377);
  b_exp(&t382);
  b_exp(&t383);
  t147.re = -t508_re;
  t147.im = -theta3 + -1.5707963267948966;
  b_exp(&t147);
  t155.re = t508_re;
  t155.im = theta3 + 1.5707963267948966;
  b_exp(&t155);
  t153.re = -t508_re;
  t153.im = -theta3 + -1.5707963267948966;
  b_exp(&t153);
  t38.re = t508_re;
  t38.im = theta3 + 1.5707963267948966;
  b_exp(&t38);
  b_exp(&t388);
  b_exp(&t389);
  b_exp(&t390);
  b_exp(&t391);
  t36.re = -t508_re;
  t36.im = -theta3 + -1.5707963267948966;
  b_exp(&t36);
  t32.re = t508_re;
  t32.im = theta3 + 1.5707963267948966;
  b_exp(&t32);
  b_exp(&t392);
  b_exp(&t393);
  t30.re = -t508_re;
  t30.im = -theta3 + -1.5707963267948966;
  b_exp(&t30);
  t66.re = t508_re;
  t66.im = theta3 + 1.5707963267948966;
  b_exp(&t66);
  b_exp(&t402);
  b_exp(&t403);
  b_exp(&t372);
  b_exp(&t373);
  b_exp(&t434);
  b_exp(&t435);
  b_exp(&t436);
  b_exp(&t437);
  b_exp(&t458);
  b_exp(&t459);
  b_exp(&t460);
  b_exp(&t461);
  b_exp(&t466);
  b_exp(&t467);
  t64.re = -t508_re;
  t64.im = -theta3 + -1.5707963267948966;
  b_exp(&t64);
  t60.re = t508_re;
  t60.im = theta3 + 1.5707963267948966;
  b_exp(&t60);
  t58.re = -t508_re;
  t58.im = -theta3 + -1.5707963267948966;
  b_exp(&t58);
  t80.re = t508_re;
  t80.im = theta3 + 1.5707963267948966;
  b_exp(&t80);
  b_exp(&t472);
  b_exp(&t473);
  b_exp(&t450);
  b_exp(&t451);
  t78.re = -t508_re;
  t78.im = -theta3 + -1.5707963267948966;
  b_exp(&t78);
  t74.re = t508_re;
  t74.im = theta3 + 1.5707963267948966;
  b_exp(&t74);
  b_exp(&t438);
  b_exp(&t439);
  t72.re = -t508_re;
  t72.im = -theta3 + -1.5707963267948966;
  b_exp(&t72);
  t92.re = t508_re;
  t92.im = theta3 + 1.5707963267948966;
  b_exp(&t92);
  b_exp(&t448);
  b_exp(&t449);
  t90.re = -t508_re;
  t90.im = -theta3 + -1.5707963267948966;
  b_exp(&t90);
  t86.re = t508_re;
  t86.im = theta3 + 1.5707963267948966;
  b_exp(&t86);
  b_exp(&t452);
  b_exp(&t453);
  t84.re = -t508_re;
  t84.im = -theta3 + -1.5707963267948966;
  b_exp(&t84);
  t111.re = t508_re;
  t111.im = theta3 + 1.5707963267948966;
  b_exp(&t111);
  b_exp(&t478);
  b_exp(&t479);
  b_exp(&t482);
  b_exp(&t483);
  b_exp(&t484);
  b_exp(&t485);
  b_exp(&t490);
  b_exp(&t491);
  t109.re = -t508_re;
  t109.im = -theta3 + -1.5707963267948966;
  b_exp(&t109);
  t105.re = t508_re;
  t105.im = theta3 + 1.5707963267948966;
  b_exp(&t105);
  t103.re = -t508_re;
  t103.im = -theta3 + -1.5707963267948966;
  b_exp(&t103);
  t125.re = t508_re;
  t125.im = theta3 + 1.5707963267948966;
  b_exp(&t125);
  b_exp(&t496);
  b_exp(&t497);
  b_exp(&t498);
  b_exp(&t499);
  t123.re = -t508_re;
  t123.im = -theta3 + -1.5707963267948966;
  b_exp(&t123);
  t119.re = t508_re;
  t119.im = theta3 + 1.5707963267948966;
  b_exp(&t119);
  b_exp(&t500);
  b_exp(&t501);
  t117.re = -t508_re;
  t117.im = -theta3 + -1.5707963267948966;
  b_exp(&t117);
  t11.re = t508_re;
  t11.im = theta3 + 1.5707963267948966;
  b_exp(&t11);
  b_exp(&t510);
  b_exp(&t511);
  b_exp(&t480);
  b_exp(&t481);
  b_G_q[0].re = 0.0;
  b_G_q[0].im = 0.0;
  if (t17.im == 0.0) {
    t17_re = t17.re / 2.0;
    t17_im = 0.0;
  } else if (t17.re == 0.0) {
    t17_re = 0.0;
    t17_im = t17.im / 2.0;
  } else {
    t17_re = t17.re / 2.0;
    t17_im = t17.im / 2.0;
  }

  if (t18.im == 0.0) {
    t508_re = t18.re / 2.0;
    t18_im = 0.0;
  } else if (t18.re == 0.0) {
    t508_re = 0.0;
    t18_im = t18.im / 2.0;
  } else {
    t508_re = t18.re / 2.0;
    t18_im = t18.im / 2.0;
  }

  t17_re += t508_re;
  t17_im += t18_im;
  t19_re = (t19.re * 0.0 - t19.im * 0.5) - (t20.re * 0.0 - t20.im * 0.5);
  t19_im = (t19.re * 0.5 + t19.im * 0.0) - (t20.re * 0.5 + t20.im * 0.0);
  if (t21.im == 0.0) {
    t21_re = t21.re / 2.0;
    t21_im = 0.0;
  } else if (t21.re == 0.0) {
    t21_re = 0.0;
    t21_im = t21.im / 2.0;
  } else {
    t21_re = t21.re / 2.0;
    t21_im = t21.im / 2.0;
  }

  if (t22.im == 0.0) {
    t508_re = t22.re / 2.0;
    t18_im = 0.0;
  } else if (t22.re == 0.0) {
    t508_re = 0.0;
    t18_im = t22.im / 2.0;
  } else {
    t508_re = t22.re / 2.0;
    t18_im = t22.im / 2.0;
  }

  t21_re += t508_re;
  t21_im += t18_im;
  t23_re = (t23.re * 0.0 - t23.im * 0.5) - (t24.re * 0.0 - t24.im * 0.5);
  t23_im = (t23.re * 0.5 + t23.im * 0.0) - (t24.re * 0.5 + t24.im * 0.0);
  t121_re = (t121.re * 0.0 - t121.im * 0.5) - (t122.re * 0.0 - t122.im * 0.5);
  t121_im = (t121.re * 0.5 + t121.im * 0.0) - (t122.re * 0.5 + t122.im * 0.0);
  re = dc.re * 3.061616997868383E-17 + dc1.re * 3.061616997868383E-17;
  im = dc.im * 3.061616997868383E-17 + dc1.im * 3.061616997868383E-17;
  if (t127.im == 0.0) {
    t127_re = t127.re / 2.0;
    t127_im = 0.0;
  } else if (t127.re == 0.0) {
    t127_re = 0.0;
    t127_im = t127.im / 2.0;
  } else {
    t127_re = t127.re / 2.0;
    t127_im = t127.im / 2.0;
  }

  if (t128.im == 0.0) {
    t508_re = t128.re / 2.0;
    t18_im = 0.0;
  } else if (t128.re == 0.0) {
    t508_re = 0.0;
    t18_im = t128.im / 2.0;
  } else {
    t508_re = t128.re / 2.0;
    t18_im = t128.im / 2.0;
  }

  t127_re += t508_re;
  t127_im += t18_im;
  b_re = (dc2.re * 0.0 - dc2.im * 3.061616997868383E-17) - (dc3.re * 0.0 -
    dc3.im * 3.061616997868383E-17);
  b_im = (dc2.re * 3.061616997868383E-17 + dc2.im * 0.0) - (dc3.re *
    3.061616997868383E-17 + dc3.im * 0.0);
  t113_re = (t113.re * 0.0 - t113.im * 0.5) - (t114.re * 0.0 - t114.im * 0.5);
  t113_im = (t113.re * 0.5 + t113.im * 0.0) - (t114.re * 0.5 + t114.im * 0.0);
  t115_re = (((t115.re * 0.0 - t115.im * 6.123233995736766E-17) - (t116.re * 0.0
    - t116.im * 6.123233995736766E-17)) + (t121_re * re - t121_im * im)) -
    (t127_re * b_re - t127_im * b_im);
  t115_im = (((t115.re * 6.123233995736766E-17 + t115.im * 0.0) - (t116.re *
    6.123233995736766E-17 + t116.im * 0.0)) + (t121_re * im + t121_im * re)) -
    (t127_re * b_im + t127_im * b_re);
  if (dc4.im == 0.0) {
    re = dc4.re / 2.0;
    im = 0.0;
  } else if (dc4.re == 0.0) {
    re = 0.0;
    im = dc4.im / 2.0;
  } else {
    re = dc4.re / 2.0;
    im = dc4.im / 2.0;
  }

  if (dc5.im == 0.0) {
    b_re = dc5.re / 2.0;
    b_im = 0.0;
  } else if (dc5.re == 0.0) {
    b_re = 0.0;
    b_im = dc5.im / 2.0;
  } else {
    b_re = dc5.re / 2.0;
    b_im = dc5.im / 2.0;
  }

  if (t101.im == 0.0) {
    t127_re = t101.re / 2.0;
    t127_im = 0.0;
  } else if (t101.re == 0.0) {
    t127_re = 0.0;
    t127_im = t101.im / 2.0;
  } else {
    t127_re = t101.re / 2.0;
    t127_im = t101.im / 2.0;
  }

  if (t102.im == 0.0) {
    t508_re = t102.re / 2.0;
    t18_im = 0.0;
  } else if (t102.re == 0.0) {
    t508_re = 0.0;
    t18_im = t102.im / 2.0;
  } else {
    t508_re = t102.re / 2.0;
    t18_im = t102.im / 2.0;
  }

  re += b_re;
  im += b_im;
  t127_re += t508_re;
  t127_im += t18_im;
  b_re = (dc6.re * 0.0 - dc6.im * 0.5) - (dc7.re * 0.0 - dc7.im * 0.5);
  b_im = (dc6.re * 0.5 + dc6.im * 0.0) - (dc7.re * 0.5 + dc7.im * 0.0);
  t508_re = (t107.re * 0.0 - t107.im * 0.5) - (t108.re * 0.0 - t108.im * 0.5);
  t18_im = (t107.re * 0.5 + t107.im * 0.0) - (t108.re * 0.5 + t108.im * 0.0);
  if (t99.im == 0.0) {
    t99_re = t99.re / 2.0;
    t99_im = 0.0;
  } else if (t99.re == 0.0) {
    t99_re = 0.0;
    t99_im = t99.im / 2.0;
  } else {
    t99_re = t99.re / 2.0;
    t99_im = t99.im / 2.0;
  }

  if (t100.im == 0.0) {
    t121_re = t100.re / 2.0;
    t121_im = 0.0;
  } else if (t100.re == 0.0) {
    t121_re = 0.0;
    t121_im = t100.im / 2.0;
  } else {
    t121_re = t100.re / 2.0;
    t121_im = t100.im / 2.0;
  }

  c_re = (re * t127_re - im * t127_im) + (b_re * t508_re - b_im * t18_im);
  im = (re * t127_im + im * t127_re) + (b_re * t18_im + b_im * t508_re);
  t99_re += t121_re;
  t99_im += t121_im;
  t97_re = (t97.re * 0.0 - t97.im * 0.5) - (t98.re * 0.0 - t98.im * 0.5);
  t97_im = (t97.re * 0.5 + t97.im * 0.0) - (t98.re * 0.5 + t98.im * 0.0);
  b_t113_re = (t113_re * t115_re - t113_im * t115_im) + (c_re * t99_re - im *
    t99_im);
  t113_im = (t113_re * t115_im + t113_im * t115_re) + (c_re * t99_im + im *
    t99_re);
  if (t97.im == 0.0) {
    b_t97_re = t97.re / 2.0;
    b_t97_im = 0.0;
  } else if (t97.re == 0.0) {
    b_t97_re = 0.0;
    b_t97_im = t97.im / 2.0;
  } else {
    b_t97_re = t97.re / 2.0;
    b_t97_im = t97.im / 2.0;
  }

  if (t98.im == 0.0) {
    t98_re = t98.re / 2.0;
    t98_im = 0.0;
  } else if (t98.re == 0.0) {
    t98_re = 0.0;
    t98_im = t98.im / 2.0;
  } else {
    t98_re = t98.re / 2.0;
    t98_im = t98.im / 2.0;
  }

  if (dc8.im == 0.0) {
    re = dc8.re / 2.0;
    im = 0.0;
  } else if (dc8.re == 0.0) {
    re = 0.0;
    im = dc8.im / 2.0;
  } else {
    re = dc8.re / 2.0;
    im = dc8.im / 2.0;
  }

  if (dc9.im == 0.0) {
    b_re = dc9.re / 2.0;
    b_im = 0.0;
  } else if (dc9.re == 0.0) {
    b_re = 0.0;
    b_im = dc9.im / 2.0;
  } else {
    b_re = dc9.re / 2.0;
    b_im = dc9.im / 2.0;
  }

  if (t82.im == 0.0) {
    t121_re = t82.re / 2.0;
    t121_im = 0.0;
  } else if (t82.re == 0.0) {
    t121_re = 0.0;
    t121_im = t82.im / 2.0;
  } else {
    t121_re = t82.re / 2.0;
    t121_im = t82.im / 2.0;
  }

  if (t83.im == 0.0) {
    t508_re = t83.re / 2.0;
    t18_im = 0.0;
  } else if (t83.re == 0.0) {
    t508_re = 0.0;
    t18_im = t83.im / 2.0;
  } else {
    t508_re = t83.re / 2.0;
    t18_im = t83.im / 2.0;
  }

  re += b_re;
  im += b_im;
  t121_re += t508_re;
  t121_im += t18_im;
  b_re = (dc10.re * 0.0 - dc10.im * 0.5) - (dc11.re * 0.0 - dc11.im * 0.5);
  b_im = (dc10.re * 0.5 + dc10.im * 0.0) - (dc11.re * 0.5 + dc11.im * 0.0);
  t508_re = (t88.re * 0.0 - t88.im * 0.5) - (t89.re * 0.0 - t89.im * 0.5);
  t18_im = (t88.re * 0.5 + t88.im * 0.0) - (t89.re * 0.5 + t89.im * 0.0);
  t115_re = (t94.re * 0.0 - t94.im * 3.061616997868383E-17) - (t95.re * 0.0 -
    t95.im * 3.061616997868383E-17);
  t94_im = (t94.re * 3.061616997868383E-17 + t94.im * 0.0) - (t95.re *
    3.061616997868383E-17 + t95.im * 0.0);
  c_re = (re * t121_re - im * t121_im) + (b_re * t508_re - b_im * t18_im);
  im = (re * t121_im + im * t121_re) + (b_re * t18_im + b_im * t508_re);
  if (t70.im == 0.0) {
    t70_re = t70.re / 2.0;
    t113_re = 0.0;
  } else if (t70.re == 0.0) {
    t70_re = 0.0;
    t113_re = t70.im / 2.0;
  } else {
    t70_re = t70.re / 2.0;
    t113_re = t70.im / 2.0;
  }

  if (t71.im == 0.0) {
    t508_re = t71.re / 2.0;
    t18_im = 0.0;
  } else if (t71.re == 0.0) {
    t508_re = 0.0;
    t18_im = t71.im / 2.0;
  } else {
    t508_re = t71.re / 2.0;
    t18_im = t71.im / 2.0;
  }

  re = (dc12.re * 0.0 - dc12.im * 0.5) - (dc13.re * 0.0 - dc13.im * 0.5);
  b_im = (dc12.re * 0.5 + dc12.im * 0.0) - (dc13.re * 0.5 + dc13.im * 0.0);
  t70_re += t508_re;
  t113_re += t18_im;
  if (dc14.im == 0.0) {
    b_re = dc14.re / 2.0;
    c_im = 0.0;
  } else if (dc14.re == 0.0) {
    b_re = 0.0;
    c_im = dc14.im / 2.0;
  } else {
    b_re = dc14.re / 2.0;
    c_im = dc14.im / 2.0;
  }

  if (dc15.im == 0.0) {
    d_re = dc15.re / 2.0;
    d_im = 0.0;
  } else if (dc15.re == 0.0) {
    d_re = 0.0;
    d_im = dc15.im / 2.0;
  } else {
    d_re = dc15.re / 2.0;
    d_im = dc15.im / 2.0;
  }

  b_re += d_re;
  c_im += d_im;
  t115_im = (t76.re * 0.0 - t76.im * 0.5) - (t77.re * 0.0 - t77.im * 0.5);
  t76_im = (t76.re * 0.5 + t76.im * 0.0) - (t77.re * 0.5 + t77.im * 0.0);
  t121_re = (t62.re * 0.0 - t62.im * 0.5) - (t63.re * 0.0 - t63.im * 0.5);
  t121_im = (t62.re * 0.5 + t62.im * 0.0) - (t63.re * 0.5 + t63.im * 0.0);
  d_re = dc16.re * 3.061616997868383E-17 + dc17.re * 3.061616997868383E-17;
  d_im = dc16.im * 3.061616997868383E-17 + dc17.im * 3.061616997868383E-17;
  if (t68.im == 0.0) {
    t127_re = t68.re / 2.0;
    t127_im = 0.0;
  } else if (t68.re == 0.0) {
    t127_re = 0.0;
    t127_im = t68.im / 2.0;
  } else {
    t127_re = t68.re / 2.0;
    t127_im = t68.im / 2.0;
  }

  if (t69.im == 0.0) {
    t508_re = t69.re / 2.0;
    t18_im = 0.0;
  } else if (t69.re == 0.0) {
    t508_re = 0.0;
    t18_im = t69.im / 2.0;
  } else {
    t508_re = t69.re / 2.0;
    t18_im = t69.im / 2.0;
  }

  t127_re += t508_re;
  t127_im += t18_im;
  e_re = (dc18.re * 0.0 - dc18.im * 3.061616997868383E-17) - (dc19.re * 0.0 -
    dc19.im * 3.061616997868383E-17);
  t508_re = (dc18.re * 3.061616997868383E-17 + dc18.im * 0.0) - (dc19.re *
    3.061616997868383E-17 + dc19.im * 0.0);
  t18_im = t54.re * 3.061616997868383E-17 + t55.re * 3.061616997868383E-17;
  t99_re = t54.im * 3.061616997868383E-17 + t55.im * 3.061616997868383E-17;
  t99_im = (((t56.re * 0.0 - t56.im * 6.123233995736766E-17) - (t57.re * 0.0 -
              t57.im * 6.123233995736766E-17)) + (t121_re * d_re - t121_im *
             d_im)) - (t127_re * e_re - t127_im * t508_re);
  t508_re = (((t56.re * 6.123233995736766E-17 + t56.im * 0.0) - (t57.re *
    6.123233995736766E-17 + t57.im * 0.0)) + (t121_re * d_im + t121_im * d_re))
    - (t127_re * t508_re + t127_im * e_re);
  b_t97_re += t98_re;
  b_t97_im += t98_im;
  t52_re = (((((t52.re * 0.0 - t52.im * 3.749399456654644E-33) - (t53.re * 0.0 -
    t53.im * 3.749399456654644E-33)) - (t115_re * c_re - t94_im * im)) + (re *
              t70_re - b_im * t113_re)) - (b_re * t115_im - c_im * t76_im)) +
    (t18_im * t99_im - t99_re * t508_re);
  t52_im = (((((t52.re * 3.749399456654644E-33 + t52.im * 0.0) - (t53.re *
    3.749399456654644E-33 + t53.im * 0.0)) - (t115_re * im + t94_im * c_re)) +
             (re * t113_re + b_im * t70_re)) - (b_re * t76_im + c_im * t115_im))
    + (t18_im * t508_re + t99_re * t99_im);
  if (dc20.im == 0.0) {
    re = dc20.re / 2.0;
    im = 0.0;
  } else if (dc20.re == 0.0) {
    re = 0.0;
    im = dc20.im / 2.0;
  } else {
    re = dc20.re / 2.0;
    im = dc20.im / 2.0;
  }

  if (dc21.im == 0.0) {
    b_re = dc21.re / 2.0;
    b_im = 0.0;
  } else if (dc21.re == 0.0) {
    b_re = 0.0;
    b_im = dc21.im / 2.0;
  } else {
    b_re = dc21.re / 2.0;
    b_im = dc21.im / 2.0;
  }

  if (t28.im == 0.0) {
    t121_re = t28.re / 2.0;
    t121_im = 0.0;
  } else if (t28.re == 0.0) {
    t121_re = 0.0;
    t121_im = t28.im / 2.0;
  } else {
    t121_re = t28.re / 2.0;
    t121_im = t28.im / 2.0;
  }

  if (t29.im == 0.0) {
    t508_re = t29.re / 2.0;
    t18_im = 0.0;
  } else if (t29.re == 0.0) {
    t508_re = 0.0;
    t18_im = t29.im / 2.0;
  } else {
    t508_re = t29.re / 2.0;
    t18_im = t29.im / 2.0;
  }

  re += b_re;
  im += b_im;
  t121_re += t508_re;
  t121_im += t18_im;
  b_re = (dc22.re * 0.0 - dc22.im * 0.5) - (dc23.re * 0.0 - dc23.im * 0.5);
  b_im = (dc22.re * 0.5 + dc22.im * 0.0) - (dc23.re * 0.5 + dc23.im * 0.0);
  t508_re = (t34.re * 0.0 - t34.im * 0.5) - (t35.re * 0.0 - t35.im * 0.5);
  t18_im = (t34.re * 0.5 + t34.im * 0.0) - (t35.re * 0.5 + t35.im * 0.0);
  t26_re = (t26.re * 0.0 - t26.im * 0.5) - (t27.re * 0.0 - t27.im * 0.5);
  t26_im = (t26.re * 0.5 + t26.im * 0.0) - (t27.re * 0.5 + t27.im * 0.0);
  c_re = (re * t121_re - im * t121_im) + (b_re * t508_re - b_im * t18_im);
  im = (re * t121_im + im * t121_re) + (b_re * t18_im + b_im * t508_re);
  t121_re = (t152.re * 0.0 - t152.im * 0.5) - (t151.re * 0.0 - t151.im * 0.5);
  t152_im = (t152.re * 0.5 + t152.im * 0.0) - (t151.re * 0.5 + t151.im * 0.0);
  re = (dc24.re * 0.0 - dc24.im * 0.5) - (dc25.re * 0.0 - dc25.im * 0.5);
  b_im = (dc24.re * 0.5 + dc24.im * 0.0) - (dc25.re * 0.5 + dc25.im * 0.0);
  if (dc26.im == 0.0) {
    b_re = dc26.re / 2.0;
    c_im = 0.0;
  } else if (dc26.re == 0.0) {
    b_re = 0.0;
    c_im = dc26.im / 2.0;
  } else {
    b_re = dc26.re / 2.0;
    c_im = dc26.im / 2.0;
  }

  if (dc27.im == 0.0) {
    d_re = dc27.re / 2.0;
    d_im = 0.0;
  } else if (dc27.re == 0.0) {
    d_re = 0.0;
    d_im = dc27.im / 2.0;
  } else {
    d_re = dc27.re / 2.0;
    d_im = dc27.im / 2.0;
  }

  if (t145.im == 0.0) {
    t121_im = t145.re / 2.0;
    t127_re = 0.0;
  } else if (t145.re == 0.0) {
    t121_im = 0.0;
    t127_re = t145.im / 2.0;
  } else {
    t121_im = t145.re / 2.0;
    t127_re = t145.im / 2.0;
  }

  if (t146.im == 0.0) {
    t508_re = t146.re / 2.0;
    t18_im = 0.0;
  } else if (t146.re == 0.0) {
    t508_re = 0.0;
    t18_im = t146.im / 2.0;
  } else {
    t508_re = t146.re / 2.0;
    t18_im = t146.im / 2.0;
  }

  b_re += d_re;
  c_im += d_im;
  t121_im += t508_re;
  t127_re += t18_im;
  t152_re = (t121_re * re - t152_im * b_im) - (b_re * t121_im - c_im * t127_re);
  t152_im = (t121_re * b_im + t152_im * re) - (b_re * t127_re + c_im * t121_im);
  t158_re_tmp = t158.im * 3.061616997868383E-17;
  t158_re = (t158.re * 0.0 - t158_re_tmp) - (t157.re * 0.0 - t157.im *
    3.061616997868383E-17);
  t158_im_tmp = t158.re * 3.061616997868383E-17;
  t158_im = (t158_im_tmp + t158.im * 0.0) - (t157.re * 3.061616997868383E-17 +
    t157.im * 0.0);
  if (t129.im == 0.0) {
    t129_re = t129.re / 2.0;
    t129_im = 0.0;
  } else if (t129.re == 0.0) {
    t129_re = 0.0;
    t129_im = t129.im / 2.0;
  } else {
    t129_re = t129.re / 2.0;
    t129_im = t129.im / 2.0;
  }

  if (t130.im == 0.0) {
    t121_re = t130.re / 2.0;
    t121_im = 0.0;
  } else if (t130.re == 0.0) {
    t121_re = 0.0;
    t121_im = t130.im / 2.0;
  } else {
    t121_re = t130.re / 2.0;
    t121_im = t130.im / 2.0;
  }

  t127_re = (t137.re * 0.0 - t137.im * 0.5) - (t138.re * 0.0 - t138.im * 0.5);
  t127_im = (t137.re * 0.5 + t137.im * 0.0) - (t138.re * 0.5 + t138.im * 0.0);
  re = dc28.re * 3.061616997868383E-17 + dc29.re * 3.061616997868383E-17;
  b_im = dc28.im * 3.061616997868383E-17 + dc29.im * 3.061616997868383E-17;
  if (t143.im == 0.0) {
    t99_re = t143.re / 2.0;
    t99_im = 0.0;
  } else if (t143.re == 0.0) {
    t99_re = 0.0;
    t99_im = t143.im / 2.0;
  } else {
    t99_re = t143.re / 2.0;
    t99_im = t143.im / 2.0;
  }

  if (t144.im == 0.0) {
    t508_re = t144.re / 2.0;
    t18_im = 0.0;
  } else if (t144.re == 0.0) {
    t508_re = 0.0;
    t18_im = t144.im / 2.0;
  } else {
    t508_re = t144.re / 2.0;
    t18_im = t144.im / 2.0;
  }

  t99_re += t508_re;
  t99_im += t18_im;
  b_re = (dc30.re * 0.0 - dc30.im * 3.061616997868383E-17) - (dc31.re * 0.0 -
    dc31.im * 3.061616997868383E-17);
  c_im = (dc30.re * 3.061616997868383E-17 + dc30.im * 0.0) - (dc31.re *
    3.061616997868383E-17 + dc31.im * 0.0);
  t129_re += t121_re;
  t129_im += t121_im;
  t131_re = (((t131.re * 0.0 - t131.im * 6.123233995736766E-17) - (t132.re * 0.0
    - t132.im * 6.123233995736766E-17)) + (t127_re * re - t127_im * b_im)) -
    (t99_re * b_re - t99_im * c_im);
  t98_im = (((t131.re * 6.123233995736766E-17 + t131.im * 0.0) - (t132.re *
              6.123233995736766E-17 + t132.im * 0.0)) + (t127_re * b_im +
             t127_im * re)) - (t99_re * c_im + t99_im * b_re);
  if (t40.im == 0.0) {
    e_re = t40.re / 2.0;
    t40_im = 0.0;
  } else if (t40.re == 0.0) {
    e_re = 0.0;
    t40_im = t40.im / 2.0;
  } else {
    e_re = t40.re / 2.0;
    t40_im = t40.im / 2.0;
  }

  if (t41.im == 0.0) {
    t508_re = t41.re / 2.0;
    t18_im = 0.0;
  } else if (t41.re == 0.0) {
    t508_re = 0.0;
    t18_im = t41.im / 2.0;
  } else {
    t508_re = t41.re / 2.0;
    t18_im = t41.im / 2.0;
  }

  re = (dc32.re * 0.0 - dc32.im * 0.5) - (dc33.re * 0.0 - dc33.im * 0.5);
  b_im = (dc32.re * 0.5 + dc32.im * 0.0) - (dc33.re * 0.5 + dc33.im * 0.0);
  e_re += t508_re;
  t40_im += t18_im;
  if (dc34.im == 0.0) {
    b_re = dc34.re / 2.0;
    c_im = 0.0;
  } else if (dc34.re == 0.0) {
    b_re = 0.0;
    c_im = dc34.im / 2.0;
  } else {
    b_re = dc34.re / 2.0;
    c_im = dc34.im / 2.0;
  }

  if (dc35.im == 0.0) {
    d_re = dc35.re / 2.0;
    d_im = 0.0;
  } else if (dc35.re == 0.0) {
    d_re = 0.0;
    d_im = dc35.im / 2.0;
  } else {
    d_re = dc35.re / 2.0;
    d_im = dc35.im / 2.0;
  }

  b_re += d_re;
  c_im += d_im;
  t94_im = (t46.re * 0.0 - t46.im * 0.5) - (t47.re * 0.0 - t47.im * 0.5);
  t98_re = (t46.re * 0.5 + t46.im * 0.0) - (t47.re * 0.5 + t47.im * 0.0);
  t121_re = t10.re * 3.061616997868383E-17;
  t121_im = t16.re * 3.061616997868383E-17;
  t99_im = t121_re + t121_im;
  t508_re = t10.im * 3.061616997868383E-17;
  t18_im = t16.im * 3.061616997868383E-17;
  t115_im = t508_re + t18_im;
  t113_re = (t5.re * 0.0 - t5.im * 0.5) - (t6.re * 0.0 - t6.im * 0.5);
  t115_re = (t5.re * 0.5 + t5.im * 0.0) - (t6.re * 0.5 + t6.im * 0.0);
  if (t13.im == 0.0) {
    t76_im = t13.re / 2.0;
    t70_re = 0.0;
  } else if (t13.re == 0.0) {
    t76_im = 0.0;
    t70_re = t13.im / 2.0;
  } else {
    t76_im = t13.re / 2.0;
    t70_re = t13.im / 2.0;
  }

  if (t14.im == 0.0) {
    t127_re = t14.re / 2.0;
    t127_im = 0.0;
  } else if (t14.re == 0.0) {
    t127_re = 0.0;
    t127_im = t14.im / 2.0;
  } else {
    t127_re = t14.re / 2.0;
    t127_im = t14.im / 2.0;
  }

  t99_re = (t10.re * 0.0 - t508_re) - (t16.re * 0.0 - t18_im);
  t508_re = (t121_re + t10.im * 0.0) - (t121_im + t16.im * 0.0);
  t76_im += t127_re;
  t70_re += t127_im;
  t121_im = t26.re * 3.061616997868383E-17 + t158_im_tmp;
  t18_im = t26.im * 3.061616997868383E-17 + t158_re_tmp;
  t121_re = (((t3.re * 0.0 - t3.im * 6.123233995736766E-17) - (t4.re * 0.0 -
    t4.im * 6.123233995736766E-17)) + (t99_im * t113_re - t115_im * t115_re)) -
    (t99_re * t76_im - t508_re * t70_re);
  t508_re = (((t3.re * 6.123233995736766E-17 + t3.im * 0.0) - (t4.re *
    6.123233995736766E-17 + t4.im * 0.0)) + (t99_im * t115_re + t115_im *
              t113_re)) - (t99_re * t70_re + t508_re * t76_im);
  b_G_q[1].re = -g * ((((((((((((t3.re * 0.2058375 - t3.im *
    -8.5786508280272084E-18) + (t152.re * 0.2058375 - t152.im *
    8.5786508280272084E-18)) - (t17_re * t19_re - t17_im * t19_im) * 0.01596) +
    (t21_re * t23_re - t21_im * t23_im) * 0.01596) - (t97_re * b_t113_re -
    t97_im * t113_im) * 0.00965) + (b_t97_re * t52_re - b_t97_im * t52_im) *
    0.00965) + (t26_re * c_re - t26_im * im) * 5.9089208058859789E-19) +
    (t152_re * t158_re - t152_im * t158_im) * 0.005446875) - (t129_re * t131_re
    - t129_im * t98_im) * 5.9089208058859789E-19) + (re * e_re - b_im * t40_im) *
                        0.167653125) - (b_re * t94_im - c_im * t98_re) *
                       0.167653125) - (t121_im * t121_re - t18_im * t508_re) *
                      0.005446875);
  b_G_q[1].im = -g * ((((((((((((t3.re * -8.5786508280272084E-18 + t3.im *
    0.2058375) + (t152.re * 8.5786508280272084E-18 + t152.im * 0.2058375)) -
    (t17_re * t19_im + t17_im * t19_re) * 0.01596) + (t21_re * t23_im + t21_im *
    t23_re) * 0.01596) - (t97_re * t113_im + t97_im * b_t113_re) * 0.00965) +
    (b_t97_re * t52_im + b_t97_im * t52_re) * 0.00965) + (t26_re * im + t26_im *
    c_re) * 5.9089208058859789E-19) + (t152_re * t158_im + t152_im * t158_re) *
    0.005446875) - (t129_re * t98_im + t129_im * t131_re) *
    5.9089208058859789E-19) + (re * t40_im + b_im * e_re) * 0.167653125) - (b_re
    * t98_re + c_im * t94_im) * 0.167653125) - (t121_im * t508_re + t18_im *
    t121_re) * 0.005446875);
  if (t232.im == 0.0) {
    t21_re = t232.re / 2.0;
    t21_im = 0.0;
  } else if (t232.re == 0.0) {
    t21_re = 0.0;
    t21_im = t232.im / 2.0;
  } else {
    t21_re = t232.re / 2.0;
    t21_im = t232.im / 2.0;
  }

  if (t233.im == 0.0) {
    t508_re = t233.re / 2.0;
    t18_im = 0.0;
  } else if (t233.re == 0.0) {
    t508_re = 0.0;
    t18_im = t233.im / 2.0;
  } else {
    t508_re = t233.re / 2.0;
    t18_im = t233.im / 2.0;
  }

  t21_re += t508_re;
  t21_im += t18_im;
  t23_re = (t234.re * 0.0 - t234.im * 0.5) - (t235.re * 0.0 - t235.im * 0.5);
  t23_im = (t234.re * 0.5 + t234.im * 0.0) - (t235.re * 0.5 + t235.im * 0.0);
  if (t176.im == 0.0) {
    t19_re = t176.re / 2.0;
    t19_im = 0.0;
  } else if (t176.re == 0.0) {
    t19_re = 0.0;
    t19_im = t176.im / 2.0;
  } else {
    t19_re = t176.re / 2.0;
    t19_im = t176.im / 2.0;
  }

  if (t177.im == 0.0) {
    t113_re = t177.re / 2.0;
    t115_re = 0.0;
  } else if (t177.re == 0.0) {
    t113_re = 0.0;
    t115_re = t177.im / 2.0;
  } else {
    t113_re = t177.re / 2.0;
    t115_re = t177.im / 2.0;
  }

  t99_re = (t182.re * 0.0 - t182.im * 0.5) - (t183.re * 0.0 - t183.im * 0.5);
  t98_im = (t182.re * 0.5 + t182.im * 0.0) - (t183.re * 0.5 + t183.im * 0.0);
  re = dc36.re * 3.061616997868383E-17 + dc37.re * 3.061616997868383E-17;
  im = dc36.im * 3.061616997868383E-17 + dc37.im * 3.061616997868383E-17;
  if (t188.im == 0.0) {
    t99_im = t188.re / 2.0;
    t115_im = 0.0;
  } else if (t188.re == 0.0) {
    t99_im = 0.0;
    t115_im = t188.im / 2.0;
  } else {
    t99_im = t188.re / 2.0;
    t115_im = t188.im / 2.0;
  }

  if (t189.im == 0.0) {
    t508_re = t189.re / 2.0;
    t18_im = 0.0;
  } else if (t189.re == 0.0) {
    t508_re = 0.0;
    t18_im = t189.im / 2.0;
  } else {
    t508_re = t189.re / 2.0;
    t18_im = t189.im / 2.0;
  }

  b_re = (dc38.re * 0.0 - dc38.im * 3.061616997868383E-17) - (dc39.re * 0.0 -
    dc39.im * 3.061616997868383E-17);
  b_im = (dc38.re * 3.061616997868383E-17 + dc38.im * 0.0) - (dc39.re *
    3.061616997868383E-17 + dc39.im * 0.0);
  t99_im = (t99_im + t508_re) + 7.498798913309288E-33;
  t115_im += t18_im;
  t94_im = t190.re * 3.061616997868383E-17 + t191.re * 3.061616997868383E-17;
  t113_im = t190.im * 3.061616997868383E-17 + t191.im * 3.061616997868383E-17;
  t98_re = (t99_re * re - t98_im * im) - (b_re * t99_im - b_im * t115_im);
  t98_im = (t99_re * im + t98_im * re) - (b_re * t115_im + b_im * t99_im);
  re = (dc40.re * 0.0 - dc40.im * 0.5) - (dc41.re * 0.0 - dc41.im * 0.5);
  im = (dc40.re * 0.5 + dc40.im * 0.0) - (dc41.re * 0.5 + dc41.im * 0.0);
  t121_re = (t192.re * 0.0 - t192.im * 0.5) - (t193.re * 0.0 - t193.im * 0.5);
  t121_im = (t192.re * 0.5 + t192.im * 0.0) - (t193.re * 0.5 + t193.im * 0.0);
  if (dc42.im == 0.0) {
    b_re = dc42.re / 2.0;
    b_im = 0.0;
  } else if (dc42.re == 0.0) {
    b_re = 0.0;
    b_im = dc42.im / 2.0;
  } else {
    b_re = dc42.re / 2.0;
    b_im = dc42.im / 2.0;
  }

  if (dc43.im == 0.0) {
    c_re = dc43.re / 2.0;
    c_im = 0.0;
  } else if (dc43.re == 0.0) {
    c_re = 0.0;
    c_im = dc43.im / 2.0;
  } else {
    c_re = dc43.re / 2.0;
    c_im = dc43.im / 2.0;
  }

  if (t202.im == 0.0) {
    t127_re = t202.re / 2.0;
    t127_im = 0.0;
  } else if (t202.re == 0.0) {
    t127_re = 0.0;
    t127_im = t202.im / 2.0;
  } else {
    t127_re = t202.re / 2.0;
    t127_im = t202.im / 2.0;
  }

  if (t203.im == 0.0) {
    t508_re = t203.re / 2.0;
    t18_im = 0.0;
  } else if (t203.re == 0.0) {
    t508_re = 0.0;
    t18_im = t203.im / 2.0;
  } else {
    t508_re = t203.re / 2.0;
    t18_im = t203.im / 2.0;
  }

  b_re += c_re;
  b_im += c_im;
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t76_im = (t204.re * 0.0 - t204.im * 3.061616997868383E-17) - (t205.re * 0.0 -
    t205.im * 3.061616997868383E-17);
  t70_re = (t204.re * 3.061616997868383E-17 + t204.im * 0.0) - (t205.re *
    3.061616997868383E-17 + t205.im * 0.0);
  c_re = (re * t121_re - im * t121_im) + (b_re * t127_re - b_im * t127_im);
  im = (re * t121_im + im * t121_re) + (b_re * t127_im + b_im * t127_re);
  if (dc44.im == 0.0) {
    re = dc44.re / 2.0;
    b_im = 0.0;
  } else if (dc44.re == 0.0) {
    re = 0.0;
    b_im = dc44.im / 2.0;
  } else {
    re = dc44.re / 2.0;
    b_im = dc44.im / 2.0;
  }

  if (dc45.im == 0.0) {
    b_re = dc45.re / 2.0;
    c_im = 0.0;
  } else if (dc45.re == 0.0) {
    b_re = 0.0;
    c_im = dc45.im / 2.0;
  } else {
    b_re = dc45.re / 2.0;
    c_im = dc45.im / 2.0;
  }

  re += b_re;
  b_im += c_im;
  t121_re = (t206.re * 0.0 - t206.im * 0.5) - (t207.re * 0.0 - t207.im * 0.5);
  t121_im = (t206.re * 0.5 + t206.im * 0.0) - (t207.re * 0.5 + t207.im * 0.0);
  if (t216.im == 0.0) {
    t127_re = t216.re / 2.0;
    t127_im = 0.0;
  } else if (t216.re == 0.0) {
    t127_re = 0.0;
    t127_im = t216.im / 2.0;
  } else {
    t127_re = t216.re / 2.0;
    t127_im = t216.im / 2.0;
  }

  if (t217.im == 0.0) {
    t508_re = t217.re / 2.0;
    t18_im = 0.0;
  } else if (t217.re == 0.0) {
    t508_re = 0.0;
    t18_im = t217.im / 2.0;
  } else {
    t508_re = t217.re / 2.0;
    t18_im = t217.im / 2.0;
  }

  b_re = (dc46.re * 0.0 - dc46.im * 0.5) - (dc47.re * 0.0 - dc47.im * 0.5);
  c_im = (dc46.re * 0.5 + dc46.im * 0.0) - (dc47.re * 0.5 + dc47.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t19_re += t113_re;
  t19_im += t115_re;
  b_t113_re = (((t94_im * t98_re - t113_im * t98_im) - (t76_im * c_re - t70_re *
    im)) - (re * t121_re - b_im * t121_im)) + (b_re * t127_re - c_im * t127_im);
  t113_im = (((t94_im * t98_im + t113_im * t98_re) - (t76_im * im + t70_re *
    c_re)) - (re * t121_im + b_im * t121_re)) + (b_re * t127_im + c_im * t127_re);
  re = (dc48.re * 0.0 - dc48.im * 0.5) - (dc49.re * 0.0 - dc49.im * 0.5);
  im = (dc48.re * 0.5 + dc48.im * 0.0) - (dc49.re * 0.5 + dc49.im * 0.0);
  t70_re = (t292.re * 0.0 - t292.im * 0.5) - (t293.re * 0.0 - t293.im * 0.5);
  t121_re = (t292.re * 0.5 + t292.im * 0.0) - (t293.re * 0.5 + t293.im * 0.0);
  if (dc50.im == 0.0) {
    b_re = dc50.re / 2.0;
    b_im = 0.0;
  } else if (dc50.re == 0.0) {
    b_re = 0.0;
    b_im = dc50.im / 2.0;
  } else {
    b_re = dc50.re / 2.0;
    b_im = dc50.im / 2.0;
  }

  if (dc51.im == 0.0) {
    c_re = dc51.re / 2.0;
    c_im = 0.0;
  } else if (dc51.re == 0.0) {
    c_re = 0.0;
    c_im = dc51.im / 2.0;
  } else {
    c_re = dc51.re / 2.0;
    c_im = dc51.im / 2.0;
  }

  if (t302.im == 0.0) {
    t121_im = t302.re / 2.0;
    t127_re = 0.0;
  } else if (t302.re == 0.0) {
    t121_im = 0.0;
    t127_re = t302.im / 2.0;
  } else {
    t121_im = t302.re / 2.0;
    t127_re = t302.im / 2.0;
  }

  if (t303.im == 0.0) {
    t508_re = t303.re / 2.0;
    t18_im = 0.0;
  } else if (t303.re == 0.0) {
    t508_re = 0.0;
    t18_im = t303.im / 2.0;
  } else {
    t508_re = t303.re / 2.0;
    t18_im = t303.im / 2.0;
  }

  b_re += c_re;
  b_im += c_im;
  t121_im = (t121_im + t508_re) + 7.498798913309288E-33;
  t127_re += t18_im;
  t97_re = (t290.re * 0.0 - t290.im * 0.5) - (t291.re * 0.0 - t291.im * 0.5);
  t97_im = (t290.re * 0.5 + t290.im * 0.0) - (t291.re * 0.5 + t291.im * 0.0);
  c_re = (re * t70_re - im * t121_re) + (b_re * t121_im - b_im * t127_re);
  im = (re * t121_re + im * t70_re) + (b_re * t127_re + b_im * t121_im);
  if (t258.im == 0.0) {
    t52_im = t258.re / 2.0;
    t52_re = 0.0;
  } else if (t258.re == 0.0) {
    t52_im = 0.0;
    t52_re = t258.im / 2.0;
  } else {
    t52_im = t258.re / 2.0;
    t52_re = t258.im / 2.0;
  }

  if (t259.im == 0.0) {
    t508_re = t259.re / 2.0;
    t18_im = 0.0;
  } else if (t259.re == 0.0) {
    t508_re = 0.0;
    t18_im = t259.im / 2.0;
  } else {
    t508_re = t259.re / 2.0;
    t18_im = t259.im / 2.0;
  }

  b_t97_re = (t256.re * 0.0 - t256.im * 0.5) - (t257.re * 0.0 - t257.im * 0.5);
  b_t97_im = (t256.re * 0.5 + t256.im * 0.0) - (t257.re * 0.5 + t257.im * 0.0);
  t52_im = (t52_im + t508_re) + 7.498798913309288E-33;
  t52_re += t18_im;
  t121_re = (t166.re * 0.0 - t166.im * 0.5) - (t167.re * 0.0 - t167.im * 0.5);
  t26_im = (t166.re * 0.5 + t166.im * 0.0) - (t167.re * 0.5 + t167.im * 0.0);
  re = dc52.re * 3.061616997868383E-17 + dc53.re * 3.061616997868383E-17;
  b_im = dc52.im * 3.061616997868383E-17 + dc53.im * 3.061616997868383E-17;
  if (t172.im == 0.0) {
    t121_im = t172.re / 2.0;
    t127_re = 0.0;
  } else if (t172.re == 0.0) {
    t121_im = 0.0;
    t127_re = t172.im / 2.0;
  } else {
    t121_im = t172.re / 2.0;
    t127_re = t172.im / 2.0;
  }

  if (t173.im == 0.0) {
    t508_re = t173.re / 2.0;
    t18_im = 0.0;
  } else if (t173.re == 0.0) {
    t508_re = 0.0;
    t18_im = t173.im / 2.0;
  } else {
    t508_re = t173.re / 2.0;
    t18_im = t173.im / 2.0;
  }

  b_re = (dc54.re * 0.0 - dc54.im * 3.061616997868383E-17) - (dc55.re * 0.0 -
    dc55.im * 3.061616997868383E-17);
  c_im = (dc54.re * 3.061616997868383E-17 + dc54.im * 0.0) - (dc55.re *
    3.061616997868383E-17 + dc55.im * 0.0);
  t121_im = (t121_im + t508_re) + 7.498798913309288E-33;
  t127_re += t18_im;
  t152_re = t174.re * 3.061616997868383E-17 + t175.re * 3.061616997868383E-17;
  t152_im = t174.im * 3.061616997868383E-17 + t175.im * 3.061616997868383E-17;
  t26_re = (t121_re * re - t26_im * b_im) - (b_re * t121_im - c_im * t127_re);
  t26_im = (t121_re * b_im + t26_im * re) - (b_re * t127_re + c_im * t121_im);
  re = (dc56.re * 0.0 - dc56.im * 0.5) - (dc57.re * 0.0 - dc57.im * 0.5);
  b_im = (dc56.re * 0.5 + dc56.im * 0.0) - (dc57.re * 0.5 + dc57.im * 0.0);
  t121_re = (t218.re * 0.0 - t218.im * 0.5) - (t219.re * 0.0 - t219.im * 0.5);
  t121_im = (t218.re * 0.5 + t218.im * 0.0) - (t219.re * 0.5 + t219.im * 0.0);
  if (dc58.im == 0.0) {
    b_re = dc58.re / 2.0;
    c_im = 0.0;
  } else if (dc58.re == 0.0) {
    b_re = 0.0;
    c_im = dc58.im / 2.0;
  } else {
    b_re = dc58.re / 2.0;
    c_im = dc58.im / 2.0;
  }

  if (dc59.im == 0.0) {
    d_re = dc59.re / 2.0;
    d_im = 0.0;
  } else if (dc59.re == 0.0) {
    d_re = 0.0;
    d_im = dc59.im / 2.0;
  } else {
    d_re = dc59.re / 2.0;
    d_im = dc59.im / 2.0;
  }

  if (t228.im == 0.0) {
    t127_re = t228.re / 2.0;
    t127_im = 0.0;
  } else if (t228.re == 0.0) {
    t127_re = 0.0;
    t127_im = t228.im / 2.0;
  } else {
    t127_re = t228.re / 2.0;
    t127_im = t228.im / 2.0;
  }

  if (t229.im == 0.0) {
    t508_re = t229.re / 2.0;
    t18_im = 0.0;
  } else if (t229.re == 0.0) {
    t508_re = 0.0;
    t18_im = t229.im / 2.0;
  } else {
    t508_re = t229.re / 2.0;
    t18_im = t229.im / 2.0;
  }

  b_re += d_re;
  c_im += d_im;
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t129_re = (t230.re * 0.0 - t230.im * 3.061616997868383E-17) - (t231.re * 0.0 -
    t231.im * 3.061616997868383E-17);
  t129_im = (t230.re * 3.061616997868383E-17 + t230.im * 0.0) - (t231.re *
    3.061616997868383E-17 + t231.im * 0.0);
  d_re = (re * t121_re - b_im * t121_im) + (b_re * t127_re - c_im * t127_im);
  b_im = (re * t121_im + b_im * t121_re) + (b_re * t127_im + c_im * t127_re);
  if (dc60.im == 0.0) {
    re = dc60.re / 2.0;
    c_im = 0.0;
  } else if (dc60.re == 0.0) {
    re = 0.0;
    c_im = dc60.im / 2.0;
  } else {
    re = dc60.re / 2.0;
    c_im = dc60.im / 2.0;
  }

  if (dc61.im == 0.0) {
    b_re = dc61.re / 2.0;
    d_im = 0.0;
  } else if (dc61.re == 0.0) {
    b_re = 0.0;
    d_im = dc61.im / 2.0;
  } else {
    b_re = dc61.re / 2.0;
    d_im = dc61.im / 2.0;
  }

  re += b_re;
  c_im += d_im;
  t131_re = (t236.re * 0.0 - t236.im * 0.5) - (t237.re * 0.0 - t237.im * 0.5);
  t158_re_tmp = (t236.re * 0.5 + t236.im * 0.0) - (t237.re * 0.5 + t237.im * 0.0);
  if (t276.im == 0.0) {
    t76_im = t276.re / 2.0;
    t158_im = 0.0;
  } else if (t276.re == 0.0) {
    t76_im = 0.0;
    t158_im = t276.im / 2.0;
  } else {
    t76_im = t276.re / 2.0;
    t158_im = t276.im / 2.0;
  }

  if (t277.im == 0.0) {
    t508_re = t277.re / 2.0;
    t18_im = 0.0;
  } else if (t277.re == 0.0) {
    t508_re = 0.0;
    t18_im = t277.im / 2.0;
  } else {
    t508_re = t277.re / 2.0;
    t18_im = t277.im / 2.0;
  }

  b_re = (dc62.re * 0.0 - dc62.im * 0.5) - (t282.re * 0.0 - t282.im * 0.5);
  d_im = (dc62.re * 0.5 + dc62.im * 0.0) - (t282.re * 0.5 + t282.im * 0.0);
  t99_re = (t278.re * 0.0 - t278.im * 0.5) - (t279.re * 0.0 - t279.im * 0.5);
  t99_im = (t278.re * 0.5 + t278.im * 0.0) - (t279.re * 0.5 + t279.im * 0.0);
  if (t280.im == 0.0) {
    t115_im = t280.re / 2.0;
    t113_re = 0.0;
  } else if (t280.re == 0.0) {
    t115_im = 0.0;
    t113_re = t280.im / 2.0;
  } else {
    t115_im = t280.re / 2.0;
    t113_re = t280.im / 2.0;
  }

  if (t240.im == 0.0) {
    t121_re = t240.re / 2.0;
    t121_im = 0.0;
  } else if (t240.re == 0.0) {
    t121_re = 0.0;
    t121_im = t240.im / 2.0;
  } else {
    t121_re = t240.re / 2.0;
    t121_im = t240.im / 2.0;
  }

  if (t288.im == 0.0) {
    t115_re = t288.re / 2.0;
    t94_im = 0.0;
  } else if (t288.re == 0.0) {
    t115_re = 0.0;
    t94_im = t288.im / 2.0;
  } else {
    t115_re = t288.re / 2.0;
    t94_im = t288.im / 2.0;
  }

  if (t289.im == 0.0) {
    t127_re = t289.re / 2.0;
    t127_im = 0.0;
  } else if (t289.re == 0.0) {
    t127_re = 0.0;
    t127_im = t289.im / 2.0;
  } else {
    t127_re = t289.re / 2.0;
    t127_im = t289.im / 2.0;
  }

  t115_im += t121_re;
  t113_re += t121_im;
  t115_re = (t115_re + t127_re) + 7.498798913309288E-33;
  t94_im += t127_im;
  t76_im += t508_re;
  t158_im += t18_im;
  e_re = (b_re * t99_re - d_im * t99_im) + (t115_im * t115_re - t113_re * t94_im);
  d_im = (b_re * t99_im + d_im * t99_re) + (t115_im * t94_im + t113_re * t115_re);
  t121_re = (t268.re * 0.0 - t268.im * 0.5) - (t269.re * 0.0 - t269.im * 0.5);
  t113_re = (t268.re * 0.5 + t268.im * 0.0) - (t269.re * 0.5 + t269.im * 0.0);
  t121_im = t238.re * 3.061616997868383E-17 + t226.re * 3.061616997868383E-17;
  t127_re = t238.im * 3.061616997868383E-17 + t226.im * 3.061616997868383E-17;
  if (t274.im == 0.0) {
    t127_im = t274.re / 2.0;
    t99_re = 0.0;
  } else if (t274.re == 0.0) {
    t127_im = 0.0;
    t99_re = t274.im / 2.0;
  } else {
    t127_im = t274.re / 2.0;
    t99_re = t274.im / 2.0;
  }

  if (t275.im == 0.0) {
    t508_re = t275.re / 2.0;
    t18_im = 0.0;
  } else if (t275.re == 0.0) {
    t508_re = 0.0;
    t18_im = t275.im / 2.0;
  } else {
    t508_re = t275.re / 2.0;
    t18_im = t275.im / 2.0;
  }

  t99_im = (t224.re * 0.0 - t224.im * 3.061616997868383E-17) - (t222.re * 0.0 -
    t222.im * 3.061616997868383E-17);
  t115_im = (t224.re * 3.061616997868383E-17 + t224.im * 0.0) - (t222.re *
    3.061616997868383E-17 + t222.im * 0.0);
  t127_im = (t127_im + t508_re) + 7.498798913309288E-33;
  t99_re += t18_im;
  t70_re = (t121_re * t121_im - t113_re * t127_re) - (t99_im * t127_im - t115_im
    * t99_re);
  t113_re = (t121_re * t127_re + t113_re * t121_im) - (t99_im * t99_re + t115_im
    * t127_im);
  t508_re = (t262.re * 0.0 - t262.im * 0.5) - (t263.re * 0.0 - t263.im * 0.5);
  t18_im = (t262.re * 0.5 + t262.im * 0.0) - (t263.re * 0.5 + t263.im * 0.0);
  t158_re = (t76_im * e_re - t158_im * d_im) + (t70_re * t508_re - t113_re *
    t18_im);
  t158_im = (t76_im * d_im + t158_im * e_re) + (t70_re * t18_im + t113_re *
    t508_re);
  t76_im = (t260.re * 0.0 - t260.im * 0.5) - (t261.re * 0.0 - t261.im * 0.5);
  t158_im_tmp = (t260.re * 0.5 + t260.im * 0.0) - (t261.re * 0.5 + t261.im * 0.0);
  if (t308.im == 0.0) {
    t70_re = t308.re / 2.0;
    t94_im = 0.0;
  } else if (t308.re == 0.0) {
    t70_re = 0.0;
    t94_im = t308.im / 2.0;
  } else {
    t70_re = t308.re / 2.0;
    t94_im = t308.im / 2.0;
  }

  if (t309.im == 0.0) {
    t508_re = t309.re / 2.0;
    t18_im = 0.0;
  } else if (t309.re == 0.0) {
    t508_re = 0.0;
    t18_im = t309.im / 2.0;
  } else {
    t508_re = t309.re / 2.0;
    t18_im = t309.im / 2.0;
  }

  t98_re = (t220.re * 0.0 - t220.im * 0.5) - (t170.re * 0.0 - t170.im * 0.5);
  t98_im = (t220.re * 0.5 + t220.im * 0.0) - (t170.re * 0.5 + t170.im * 0.0);
  t70_re = (t70_re + t508_re) + 7.498798913309288E-33;
  t94_im += t18_im;
  t127_im = (t248.re * 0.0 - t248.im * 0.5) - (t249.re * 0.0 - t249.im * 0.5);
  t99_re = (t248.re * 0.5 + t248.im * 0.0) - (t249.re * 0.5 + t249.im * 0.0);
  t99_im = t168.re * 3.061616997868383E-17 + t164.re * 3.061616997868383E-17;
  t115_im = t168.im * 3.061616997868383E-17 + t164.im * 3.061616997868383E-17;
  if (t254.im == 0.0) {
    t113_re = t254.re / 2.0;
    t115_re = 0.0;
  } else if (t254.re == 0.0) {
    t113_re = 0.0;
    t115_re = t254.im / 2.0;
  } else {
    t113_re = t254.re / 2.0;
    t115_re = t254.im / 2.0;
  }

  if (t255.im == 0.0) {
    t508_re = t255.re / 2.0;
    t18_im = 0.0;
  } else if (t255.re == 0.0) {
    t508_re = 0.0;
    t18_im = t255.im / 2.0;
  } else {
    t508_re = t255.re / 2.0;
    t18_im = t255.im / 2.0;
  }

  e_re = (t162.re * 0.0 - t162.im * 3.061616997868383E-17) - (t300.re * 0.0 -
    t300.im * 3.061616997868383E-17);
  t40_im = (t162.re * 3.061616997868383E-17 + t162.im * 0.0) - (t300.re *
    3.061616997868383E-17 + t300.im * 0.0);
  t113_re = (t113_re + t508_re) + 7.498798913309288E-33;
  t115_re += t18_im;
  if (t242.im == 0.0) {
    t508_re = t242.re / 2.0;
    t18_im = 0.0;
  } else if (t242.re == 0.0) {
    t508_re = 0.0;
    t18_im = t242.im / 2.0;
  } else {
    t508_re = t242.re / 2.0;
    t18_im = t242.im / 2.0;
  }

  if (t243.im == 0.0) {
    t121_re = t243.re / 2.0;
    t121_im = 0.0;
  } else if (t243.re == 0.0) {
    t121_re = 0.0;
    t121_im = t243.im / 2.0;
  } else {
    t121_re = t243.re / 2.0;
    t121_im = t243.im / 2.0;
  }

  t127_re = (t127_im * t99_im - t99_re * t115_im) - (e_re * t113_re - t40_im *
    t115_re);
  t99_re = (t127_im * t115_im + t99_re * t99_im) - (e_re * t115_re + t40_im *
    t113_re);
  t508_re += t121_re;
  t18_im += t121_im;
  b_G_q[2].re = g * ((((((((((t21_re * t23_re - t21_im * t23_im) * 0.01596 +
    (t19_re * b_t113_re - t19_im * t113_im) * 0.00965) + (t97_re * c_re - t97_im
    * im) * 5.9089208058859789E-19) - (b_t97_re * t52_im - b_t97_im * t52_re) *
    0.01596) - (t152_re * t26_re - t152_im * t26_im) * 0.005446875) + (t129_re *
    d_re - t129_im * b_im) * 0.005446875) - (re * t131_re - c_im * t158_re_tmp) *
                        0.167653125) - (t158_re * t76_im - t158_im * t158_im_tmp)
                       * 0.00965) + (t98_re * t70_re - t98_im * t94_im) *
                      0.167653125) - (t127_re * t508_re - t99_re * t18_im) *
                     5.9089208058859789E-19);
  b_G_q[2].im = g * ((((((((((t21_re * t23_im + t21_im * t23_re) * 0.01596 +
    (t19_re * t113_im + t19_im * b_t113_re) * 0.00965) + (t97_re * im + t97_im *
    c_re) * 5.9089208058859789E-19) - (b_t97_re * t52_re + b_t97_im * t52_im) *
    0.01596) - (t152_re * t26_im + t152_im * t26_re) * 0.005446875) + (t129_re *
    b_im + t129_im * d_re) * 0.005446875) - (re * t158_re_tmp + c_im * t131_re) *
                        0.167653125) - (t158_re * t158_im_tmp + t158_im * t76_im)
                       * 0.00965) + (t98_re * t94_im + t98_im * t70_re) *
                      0.167653125) - (t127_re * t18_im + t99_re * t508_re) *
                     5.9089208058859789E-19);
  t121_re = (t364.re * 0.0 - t364.im * 0.5) - (t365.re * 0.0 - t365.im * 0.5);
  t121_im = (t364.re * 0.5 + t364.im * 0.0) - (t365.re * 0.5 + t365.im * 0.0);
  t127_re = (t298.re * 0.0 - t298.im * 3.061616997868383E-17) - (t296.re * 0.0 -
    t296.im * 3.061616997868383E-17);
  t127_im = (t298.re * 3.061616997868383E-17 + t298.im * 0.0) - (t296.re *
    3.061616997868383E-17 + t296.im * 0.0);
  if (t370.im == 0.0) {
    t99_re = t370.re / 2.0;
    t99_im = 0.0;
  } else if (t370.re == 0.0) {
    t99_re = 0.0;
    t99_im = t370.im / 2.0;
  } else {
    t99_re = t370.re / 2.0;
    t99_im = t370.im / 2.0;
  }

  if (t371.im == 0.0) {
    t508_re = t371.re / 2.0;
    t18_im = 0.0;
  } else if (t371.re == 0.0) {
    t508_re = 0.0;
    t18_im = t371.im / 2.0;
  } else {
    t508_re = t371.re / 2.0;
    t18_im = t371.im / 2.0;
  }

  t115_im = t294.re * 3.061616997868383E-17 + t214.re * 3.061616997868383E-17;
  t70_re = t294.im * 3.061616997868383E-17 + t214.im * 3.061616997868383E-17;
  t99_re = (t99_re + t508_re) + 7.498798913309288E-33;
  t99_im += t18_im;
  t97_re = (t356.re * 0.0 - t356.im * 0.5) - (t357.re * 0.0 - t357.im * 0.5);
  t97_im = (t356.re * 0.5 + t356.im * 0.0) - (t357.re * 0.5 + t357.im * 0.0);
  b_t113_re = (((t358.re * 6.123233995736766E-17 + t359.re *
                 6.123233995736766E-17) + (t121_re * t127_re - t121_im * t127_im))
               + (t115_im * t99_re - t70_re * t99_im)) - 6.123233995736766E-17;
  t52_im = ((t358.im * 6.123233995736766E-17 + t359.im * 6.123233995736766E-17)
            + (t121_re * t127_im + t121_im * t127_re)) + (t115_im * t99_im +
    t70_re * t99_re);
  if (t420.im == 0.0) {
    t52_re = t420.re / 2.0;
    b_t97_re = 0.0;
  } else if (t420.re == 0.0) {
    t52_re = 0.0;
    b_t97_re = t420.im / 2.0;
  } else {
    t52_re = t420.re / 2.0;
    b_t97_re = t420.im / 2.0;
  }

  if (t421.im == 0.0) {
    t115_im = t421.re / 2.0;
    t70_re = 0.0;
  } else if (t421.re == 0.0) {
    t115_im = 0.0;
    t70_re = t421.im / 2.0;
  } else {
    t115_im = t421.re / 2.0;
    t70_re = t421.im / 2.0;
  }

  if (t212.im == 0.0) {
    t76_im = t212.re / 2.0;
    b_t97_im = 0.0;
  } else if (t212.re == 0.0) {
    t76_im = 0.0;
    b_t97_im = t212.im / 2.0;
  } else {
    t76_im = t212.re / 2.0;
    b_t97_im = t212.im / 2.0;
  }

  if (t210.im == 0.0) {
    t508_re = t210.re / 2.0;
    t18_im = 0.0;
  } else if (t210.re == 0.0) {
    t508_re = 0.0;
    t18_im = t210.im / 2.0;
  } else {
    t508_re = t210.re / 2.0;
    t18_im = t210.im / 2.0;
  }

  t76_im += t508_re;
  b_t97_im += t18_im;
  t121_re = (t422.re * 0.0 - t422.im * 0.5) - (t423.re * 0.0 - t423.im * 0.5);
  t121_im = (t422.re * 0.5 + t422.im * 0.0) - (t423.re * 0.5 + t423.im * 0.0);
  if (t432.im == 0.0) {
    t127_re = t432.re / 2.0;
    t127_im = 0.0;
  } else if (t432.re == 0.0) {
    t127_re = 0.0;
    t127_im = t432.im / 2.0;
  } else {
    t127_re = t432.re / 2.0;
    t127_im = t432.im / 2.0;
  }

  if (t433.im == 0.0) {
    t508_re = t433.re / 2.0;
    t18_im = 0.0;
  } else if (t433.re == 0.0) {
    t508_re = 0.0;
    t18_im = t433.im / 2.0;
  } else {
    t508_re = t433.re / 2.0;
    t18_im = t433.im / 2.0;
  }

  t99_re = (t208.re * 0.0 - t208.im * 0.5) - (t200.re * 0.0 - t200.im * 0.5);
  t99_im = (t208.re * 0.5 + t208.im * 0.0) - (t200.re * 0.5 + t200.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t52_re += t115_im;
  b_t97_re += t70_re;
  t26_im = (t76_im * t121_re - b_t97_im * t121_im) - (t99_re * t127_re - t99_im *
    t127_im);
  b_t97_im = (t76_im * t121_im + b_t97_im * t121_re) - (t99_re * t127_im +
    t99_im * t127_re);
  t70_re = (t412.re * 0.0 - t412.im * 0.5) - (t413.re * 0.0 - t413.im * 0.5);
  t121_re = (t412.re * 0.5 + t412.im * 0.0) - (t413.re * 0.5 + t413.im * 0.0);
  t121_im = (t198.re * 0.0 - t198.im * 3.061616997868383E-17) - (t196.re * 0.0 -
    t196.im * 3.061616997868383E-17);
  t127_re = (t198.re * 3.061616997868383E-17 + t198.im * 0.0) - (t196.re *
    3.061616997868383E-17 + t196.im * 0.0);
  if (t418.im == 0.0) {
    t127_im = t418.re / 2.0;
    t99_re = 0.0;
  } else if (t418.re == 0.0) {
    t127_im = 0.0;
    t99_re = t418.im / 2.0;
  } else {
    t127_im = t418.re / 2.0;
    t99_re = t418.im / 2.0;
  }

  if (t419.im == 0.0) {
    t508_re = t419.re / 2.0;
    t18_im = 0.0;
  } else if (t419.re == 0.0) {
    t508_re = 0.0;
    t18_im = t419.im / 2.0;
  } else {
    t508_re = t419.re / 2.0;
    t18_im = t419.im / 2.0;
  }

  t99_im = t194.re * 3.061616997868383E-17 + t186.re * 3.061616997868383E-17;
  t115_im = t194.im * 3.061616997868383E-17 + t186.im * 3.061616997868383E-17;
  t127_im = (t127_im + t508_re) + 7.498798913309288E-33;
  t99_re += t18_im;
  t152_re = (t404.re * 0.0 - t404.im * 3.061616997868383E-17) - (t405.re * 0.0 -
    t405.im * 3.061616997868383E-17);
  t152_im = (t404.re * 3.061616997868383E-17 + t404.im * 0.0) - (t405.re *
    3.061616997868383E-17 + t405.im * 0.0);
  t26_re = (((t406.re * 6.123233995736766E-17 + t407.re * 6.123233995736766E-17)
             + (t70_re * t121_im - t121_re * t127_re)) + (t99_im * t127_im -
             t115_im * t99_re)) - 6.123233995736766E-17;
  t129_im = ((t406.im * 6.123233995736766E-17 + t407.im * 6.123233995736766E-17)
             + (t70_re * t127_re + t121_re * t121_im)) + (t99_im * t99_re +
    t115_im * t127_im);
  t121_re = (t346.re * 0.0 - t346.im * 0.5) - (t347.re * 0.0 - t347.im * 0.5);
  t121_im = (t346.re * 0.5 + t346.im * 0.0) - (t347.re * 0.5 + t347.im * 0.0);
  t127_re = (t184.re * 0.0 - t184.im * 3.061616997868383E-17) - (t180.re * 0.0 -
    t180.im * 3.061616997868383E-17);
  t127_im = (t184.re * 3.061616997868383E-17 + t184.im * 0.0) - (t180.re *
    3.061616997868383E-17 + t180.im * 0.0);
  if (t352.im == 0.0) {
    t99_re = t352.re / 2.0;
    t99_im = 0.0;
  } else if (t352.re == 0.0) {
    t99_re = 0.0;
    t99_im = t352.im / 2.0;
  } else {
    t99_re = t352.re / 2.0;
    t99_im = t352.im / 2.0;
  }

  if (t353.im == 0.0) {
    t508_re = t353.re / 2.0;
    t18_im = 0.0;
  } else if (t353.re == 0.0) {
    t508_re = 0.0;
    t18_im = t353.im / 2.0;
  } else {
    t508_re = t353.re / 2.0;
    t18_im = t353.im / 2.0;
  }

  t115_im = t178.re * 3.061616997868383E-17 + t50.re * 3.061616997868383E-17;
  t76_im = t178.im * 3.061616997868383E-17 + t50.im * 3.061616997868383E-17;
  t99_re = (t99_re + t508_re) + 7.498798913309288E-33;
  t99_im += t18_im;
  t115_re = (t338.re * 0.0 - t338.im * 3.061616997868383E-17) - (t339.re * 0.0 -
    t339.im * 3.061616997868383E-17);
  t129_re = (t338.re * 3.061616997868383E-17 + t338.im * 0.0) - (t339.re *
    3.061616997868383E-17 + t339.im * 0.0);
  t158_im_tmp = (((t340.re * 6.123233995736766E-17 + t341.re *
                   6.123233995736766E-17) + (t121_re * t127_re - t121_im *
    t127_im)) + (t115_im * t99_re - t76_im * t99_im)) - 6.123233995736766E-17;
  t70_re = ((t340.im * 6.123233995736766E-17 + t341.im * 6.123233995736766E-17)
            + (t121_re * t127_im + t121_im * t127_re)) + (t115_im * t99_im +
    t76_im * t99_re);
  if (t48.im == 0.0) {
    t94_im = t48.re / 2.0;
    t113_re = 0.0;
  } else if (t48.re == 0.0) {
    t94_im = 0.0;
    t113_re = t48.im / 2.0;
  } else {
    t94_im = t48.re / 2.0;
    t113_re = t48.im / 2.0;
  }

  if (t44.im == 0.0) {
    t508_re = t44.re / 2.0;
    t18_im = 0.0;
  } else if (t44.re == 0.0) {
    t508_re = 0.0;
    t18_im = t44.im / 2.0;
  } else {
    t508_re = t44.re / 2.0;
    t18_im = t44.im / 2.0;
  }

  t94_im += t508_re;
  t113_re += t18_im;
  t121_re = (t324.re * 0.0 - t324.im * 0.5) - (t325.re * 0.0 - t325.im * 0.5);
  t121_im = (t324.re * 0.5 + t324.im * 0.0) - (t325.re * 0.5 + t325.im * 0.0);
  if (t334.im == 0.0) {
    t127_re = t334.re / 2.0;
    t127_im = 0.0;
  } else if (t334.re == 0.0) {
    t127_re = 0.0;
    t127_im = t334.im / 2.0;
  } else {
    t127_re = t334.re / 2.0;
    t127_im = t334.im / 2.0;
  }

  if (t335.im == 0.0) {
    t508_re = t335.re / 2.0;
    t18_im = 0.0;
  } else if (t335.re == 0.0) {
    t508_re = 0.0;
    t18_im = t335.im / 2.0;
  } else {
    t508_re = t335.re / 2.0;
    t18_im = t335.im / 2.0;
  }

  t115_im = (t42.re * 0.0 - t42.im * 0.5) - (t141.re * 0.0 - t141.im * 0.5);
  t76_im = (t42.re * 0.5 + t42.im * 0.0) - (t141.re * 0.5 + t141.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t99_re = t336.re * 3.061616997868383E-17 + t337.re * 3.061616997868383E-17;
  t99_im = t336.im * 3.061616997868383E-17 + t337.im * 3.061616997868383E-17;
  t98_re = (t94_im * t121_re - t113_re * t121_im) - (t115_im * t127_re - t76_im *
    t127_im);
  t113_re = (t94_im * t121_im + t113_re * t121_re) - (t115_im * t127_im + t76_im
    * t127_re);
  if (t354.im == 0.0) {
    t40_im = t354.re / 2.0;
    t131_re = 0.0;
  } else if (t354.re == 0.0) {
    t40_im = 0.0;
    t131_re = t354.im / 2.0;
  } else {
    t40_im = t354.re / 2.0;
    t131_re = t354.im / 2.0;
  }

  if (t355.im == 0.0) {
    t508_re = t355.re / 2.0;
    t18_im = 0.0;
  } else if (t355.re == 0.0) {
    t508_re = 0.0;
    t18_im = t355.im / 2.0;
  } else {
    t508_re = t355.re / 2.0;
    t18_im = t355.im / 2.0;
  }

  t158_re_tmp = (t115_re * t158_im_tmp - t129_re * t70_re) - (t99_re * t98_re -
    t99_im * t113_re);
  t129_re = (t115_re * t70_re + t129_re * t158_im_tmp) - (t99_re * t113_re +
    t99_im * t98_re);
  t40_im += t508_re;
  t131_re += t18_im;
  if (t139.im == 0.0) {
    t99_re = t139.re / 2.0;
    e_re = 0.0;
  } else if (t139.re == 0.0) {
    t99_re = 0.0;
    e_re = t139.im / 2.0;
  } else {
    t99_re = t139.re / 2.0;
    e_re = t139.im / 2.0;
  }

  if (t135.im == 0.0) {
    t508_re = t135.re / 2.0;
    t18_im = 0.0;
  } else if (t135.re == 0.0) {
    t508_re = 0.0;
    t18_im = t135.im / 2.0;
  } else {
    t508_re = t135.re / 2.0;
    t18_im = t135.im / 2.0;
  }

  t99_re += t508_re;
  e_re += t18_im;
  t121_re = (t310.re * 0.0 - t310.im * 0.5) - (t311.re * 0.0 - t311.im * 0.5);
  t121_im = (t310.re * 0.5 + t310.im * 0.0) - (t311.re * 0.5 + t311.im * 0.0);
  if (t320.im == 0.0) {
    t127_re = t320.re / 2.0;
    t127_im = 0.0;
  } else if (t320.re == 0.0) {
    t127_re = 0.0;
    t127_im = t320.im / 2.0;
  } else {
    t127_re = t320.re / 2.0;
    t127_im = t320.im / 2.0;
  }

  if (t321.im == 0.0) {
    t508_re = t321.re / 2.0;
    t18_im = 0.0;
  } else if (t321.re == 0.0) {
    t508_re = 0.0;
    t18_im = t321.im / 2.0;
  } else {
    t508_re = t321.re / 2.0;
    t18_im = t321.im / 2.0;
  }

  t115_im = (t133.re * 0.0 - t133.im * 0.5) - (t149.re * 0.0 - t149.im * 0.5);
  t76_im = (t133.re * 0.5 + t133.im * 0.0) - (t149.re * 0.5 + t149.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t98_im = t322.re * 3.061616997868383E-17 + t323.re * 3.061616997868383E-17;
  t158_im_tmp = t322.im * 3.061616997868383E-17 + t323.im *
    3.061616997868383E-17;
  t158_im = (t99_re * t121_re - e_re * t121_im) - (t115_im * t127_re - t76_im *
    t127_im);
  e_re = (t99_re * t121_im + e_re * t121_re) - (t115_im * t127_im + t76_im *
    t127_re);
  if (t374.im == 0.0) {
    t158_re = t374.re / 2.0;
    t98_re = 0.0;
  } else if (t374.re == 0.0) {
    t158_re = 0.0;
    t98_re = t374.im / 2.0;
  } else {
    t158_re = t374.re / 2.0;
    t98_re = t374.im / 2.0;
  }

  if (t375.im == 0.0) {
    t508_re = t375.re / 2.0;
    t18_im = 0.0;
  } else if (t375.re == 0.0) {
    t508_re = 0.0;
    t18_im = t375.im / 2.0;
  } else {
    t508_re = t375.re / 2.0;
    t18_im = t375.im / 2.0;
  }

  t127_re = (t382.re * 0.0 - t382.im * 0.5) - (t383.re * 0.0 - t383.im * 0.5);
  t127_im = (t382.re * 0.5 + t382.im * 0.0) - (t383.re * 0.5 + t383.im * 0.0);
  t99_re = (t147.re * 0.0 - t147.im * 3.061616997868383E-17) - (t155.re * 0.0 -
    t155.im * 3.061616997868383E-17);
  t99_im = (t147.re * 3.061616997868383E-17 + t147.im * 0.0) - (t155.re *
    3.061616997868383E-17 + t155.im * 0.0);
  if (t388.im == 0.0) {
    t115_im = t388.re / 2.0;
    t76_im = 0.0;
  } else if (t388.re == 0.0) {
    t115_im = 0.0;
    t76_im = t388.im / 2.0;
  } else {
    t115_im = t388.re / 2.0;
    t76_im = t388.im / 2.0;
  }

  if (t389.im == 0.0) {
    t121_re = t389.re / 2.0;
    t121_im = 0.0;
  } else if (t389.re == 0.0) {
    t121_re = 0.0;
    t121_im = t389.im / 2.0;
  } else {
    t121_re = t389.re / 2.0;
    t121_im = t389.im / 2.0;
  }

  t70_re = t153.re * 3.061616997868383E-17 + t38.re * 3.061616997868383E-17;
  t94_im = t153.im * 3.061616997868383E-17 + t38.im * 3.061616997868383E-17;
  t115_im = (t115_im + t121_re) + 7.498798913309288E-33;
  t76_im += t121_im;
  t158_re += t508_re;
  t98_re += t18_im;
  t115_re = (((t376.re * 6.123233995736766E-17 + t377.re * 6.123233995736766E-17)
              + (t127_re * t99_re - t127_im * t99_im)) + (t70_re * t115_im -
              t94_im * t76_im)) - 6.123233995736766E-17;
  t70_re = ((t376.im * 6.123233995736766E-17 + t377.im * 6.123233995736766E-17)
            + (t127_re * t99_im + t127_im * t99_re)) + (t70_re * t76_im + t94_im
    * t115_im);
  if (t36.im == 0.0) {
    t76_im = t36.re / 2.0;
    t113_re = 0.0;
  } else if (t36.re == 0.0) {
    t76_im = 0.0;
    t113_re = t36.im / 2.0;
  } else {
    t76_im = t36.re / 2.0;
    t113_re = t36.im / 2.0;
  }

  if (t32.im == 0.0) {
    t508_re = t32.re / 2.0;
    t18_im = 0.0;
  } else if (t32.re == 0.0) {
    t508_re = 0.0;
    t18_im = t32.im / 2.0;
  } else {
    t508_re = t32.re / 2.0;
    t18_im = t32.im / 2.0;
  }

  t76_im += t508_re;
  t113_re += t18_im;
  t121_re = (t392.re * 0.0 - t392.im * 0.5) - (t393.re * 0.0 - t393.im * 0.5);
  t127_re = (t392.re * 0.5 + t392.im * 0.0) - (t393.re * 0.5 + t393.im * 0.0);
  if (t402.im == 0.0) {
    t127_im = t402.re / 2.0;
    t99_re = 0.0;
  } else if (t402.re == 0.0) {
    t127_im = 0.0;
    t99_re = t402.im / 2.0;
  } else {
    t127_im = t402.re / 2.0;
    t99_re = t402.im / 2.0;
  }

  if (t403.im == 0.0) {
    t508_re = t403.re / 2.0;
    t18_im = 0.0;
  } else if (t403.re == 0.0) {
    t508_re = 0.0;
    t18_im = t403.im / 2.0;
  } else {
    t508_re = t403.re / 2.0;
    t18_im = t403.im / 2.0;
  }

  t99_im = (t30.re * 0.0 - t30.im * 0.5) - (t66.re * 0.0 - t66.im * 0.5);
  t115_im = (t30.re * 0.5 + t30.im * 0.0) - (t66.re * 0.5 + t66.im * 0.0);
  t127_im = (t127_im + t508_re) + 7.498798913309288E-33;
  t99_re += t18_im;
  t508_re = (t390.re * 0.0 - t390.im * 0.5) - (t391.re * 0.0 - t391.im * 0.5);
  t18_im = (t390.re * 0.5 + t390.im * 0.0) - (t391.re * 0.5 + t391.im * 0.0);
  t121_im = (t76_im * t121_re - t113_re * t127_re) - (t99_im * t127_im - t115_im
    * t99_re);
  t113_re = (t76_im * t127_re + t113_re * t121_re) - (t99_im * t99_re + t115_im *
    t127_im);
  t121_re = (t158_re * t115_re - t98_re * t70_re) + (t508_re * t121_im - t18_im *
    t113_re);
  t98_re = (t158_re * t70_re + t98_re * t115_re) + (t508_re * t113_re + t18_im *
    t121_im);
  t508_re = (t372.re * 0.0 - t372.im * 0.5) - (t373.re * 0.0 - t373.im * 0.5);
  t18_im = (t372.re * 0.5 + t372.im * 0.0) - (t373.re * 0.5 + t373.im * 0.0);
  b_G_q[3].re = -g * ((((((t97_re * b_t113_re - t97_im * t52_im) *
    -5.9089208058859789E-19 + (t52_re * t26_im - b_t97_re * b_t97_im) *
    5.9089208058859789E-19) - (t152_re * t26_re - t152_im * t129_im) *
    0.005446875) + (t158_re_tmp * t40_im - t129_re * t131_re) * 0.00965) +
                       (t98_im * t158_im - t158_im_tmp * e_re) * 0.005446875) +
                      (t121_re * t508_re - t98_re * t18_im) * 0.00965);
  b_G_q[3].im = -g * ((((((t97_re * t52_im + t97_im * b_t113_re) *
    -5.9089208058859789E-19 + (t52_re * b_t97_im + b_t97_re * t26_im) *
    5.9089208058859789E-19) - (t152_re * t129_im + t152_im * t26_re) *
    0.005446875) + (t158_re_tmp * t131_re + t129_re * t40_im) * 0.00965) +
                       (t98_im * e_re + t158_im_tmp * t158_im) * 0.005446875) +
                      (t121_re * t18_im + t98_re * t508_re) * 0.00965);
  t121_re = (t466.re * 0.0 - t466.im * 0.5) - (t467.re * 0.0 - t467.im * 0.5);
  t121_im = (t466.re * 0.5 + t466.im * 0.0) - (t467.re * 0.5 + t467.im * 0.0);
  t127_re = (t64.re * 0.0 - t64.im * 3.061616997868383E-17) - (t60.re * 0.0 -
    t60.im * 3.061616997868383E-17);
  t127_im = (t64.re * 3.061616997868383E-17 + t64.im * 0.0) - (t60.re *
    3.061616997868383E-17 + t60.im * 0.0);
  if (t472.im == 0.0) {
    t99_re = t472.re / 2.0;
    t99_im = 0.0;
  } else if (t472.re == 0.0) {
    t99_re = 0.0;
    t99_im = t472.im / 2.0;
  } else {
    t99_re = t472.re / 2.0;
    t99_im = t472.im / 2.0;
  }

  if (t473.im == 0.0) {
    t508_re = t473.re / 2.0;
    t18_im = 0.0;
  } else if (t473.re == 0.0) {
    t508_re = 0.0;
    t18_im = t473.im / 2.0;
  } else {
    t508_re = t473.re / 2.0;
    t18_im = t473.im / 2.0;
  }

  t115_im = t58.re * 3.061616997868383E-17 + t80.re * 3.061616997868383E-17;
  t70_re = t58.im * 3.061616997868383E-17 + t80.im * 3.061616997868383E-17;
  t99_re = (t99_re + t508_re) + 7.498798913309288E-33;
  t99_im += t18_im;
  e_re = t458.re * 3.061616997868383E-17 + t459.re * 3.061616997868383E-17;
  t40_im = t458.im * 3.061616997868383E-17 + t459.im * 3.061616997868383E-17;
  t158_re = (((t460.re * 6.123233995736766E-17 + t461.re * 6.123233995736766E-17)
              + (t121_re * t127_re - t121_im * t127_im)) + (t115_im * t99_re -
              t70_re * t99_im)) - 6.123233995736766E-17;
  t98_im = ((t460.im * 6.123233995736766E-17 + t461.im * 6.123233995736766E-17)
            + (t121_re * t127_im + t121_im * t127_re)) + (t115_im * t99_im +
    t70_re * t99_re);
  if (t78.im == 0.0) {
    t115_im = t78.re / 2.0;
    t158_im_tmp = 0.0;
  } else if (t78.re == 0.0) {
    t115_im = 0.0;
    t158_im_tmp = t78.im / 2.0;
  } else {
    t115_im = t78.re / 2.0;
    t158_im_tmp = t78.im / 2.0;
  }

  if (t74.im == 0.0) {
    t508_re = t74.re / 2.0;
    t18_im = 0.0;
  } else if (t74.re == 0.0) {
    t508_re = 0.0;
    t18_im = t74.im / 2.0;
  } else {
    t508_re = t74.re / 2.0;
    t18_im = t74.im / 2.0;
  }

  t115_im += t508_re;
  t158_im_tmp += t18_im;
  t121_re = (t438.re * 0.0 - t438.im * 0.5) - (t439.re * 0.0 - t439.im * 0.5);
  t121_im = (t438.re * 0.5 + t438.im * 0.0) - (t439.re * 0.5 + t439.im * 0.0);
  if (t448.im == 0.0) {
    t127_re = t448.re / 2.0;
    t127_im = 0.0;
  } else if (t448.re == 0.0) {
    t127_re = 0.0;
    t127_im = t448.im / 2.0;
  } else {
    t127_re = t448.re / 2.0;
    t127_im = t448.im / 2.0;
  }

  if (t449.im == 0.0) {
    t508_re = t449.re / 2.0;
    t18_im = 0.0;
  } else if (t449.re == 0.0) {
    t508_re = 0.0;
    t18_im = t449.im / 2.0;
  } else {
    t508_re = t449.re / 2.0;
    t18_im = t449.im / 2.0;
  }

  t99_re = (t72.re * 0.0 - t72.im * 0.5) - (t92.re * 0.0 - t92.im * 0.5);
  t99_im = (t72.re * 0.5 + t72.im * 0.0) - (t92.re * 0.5 + t92.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t98_re = (t450.re * 0.0 - t450.im * 3.061616997868383E-17) - (t451.re * 0.0 -
    t451.im * 3.061616997868383E-17);
  t113_re = (t450.re * 3.061616997868383E-17 + t450.im * 0.0) - (t451.re *
    3.061616997868383E-17 + t451.im * 0.0);
  t115_re = (t115_im * t121_re - t158_im_tmp * t121_im) - (t99_re * t127_re -
    t99_im * t127_im);
  t158_im_tmp = (t115_im * t121_im + t158_im_tmp * t121_re) - (t99_re * t127_im
    + t99_im * t127_re);
  t127_re = (t90.re * 0.0 - t90.im * 0.5) - (t86.re * 0.0 - t86.im * 0.5);
  t127_im = (t90.re * 0.5 + t90.im * 0.0) - (t86.re * 0.5 + t86.im * 0.0);
  t99_re = (t452.re * 0.0 - t452.im * 0.5) - (t453.re * 0.0 - t453.im * 0.5);
  t99_im = (t452.re * 0.5 + t452.im * 0.0) - (t453.re * 0.5 + t453.im * 0.0);
  if (t84.im == 0.0) {
    t115_im = t84.re / 2.0;
    t76_im = 0.0;
  } else if (t84.re == 0.0) {
    t115_im = 0.0;
    t76_im = t84.im / 2.0;
  } else {
    t115_im = t84.re / 2.0;
    t76_im = t84.im / 2.0;
  }

  if (t111.im == 0.0) {
    t508_re = t111.re / 2.0;
    t18_im = 0.0;
  } else if (t111.re == 0.0) {
    t508_re = 0.0;
    t18_im = t111.im / 2.0;
  } else {
    t508_re = t111.re / 2.0;
    t18_im = t111.im / 2.0;
  }

  if (t478.im == 0.0) {
    t70_re = t478.re / 2.0;
    t94_im = 0.0;
  } else if (t478.re == 0.0) {
    t70_re = 0.0;
    t94_im = t478.im / 2.0;
  } else {
    t70_re = t478.re / 2.0;
    t94_im = t478.im / 2.0;
  }

  if (t479.im == 0.0) {
    t121_re = t479.re / 2.0;
    t121_im = 0.0;
  } else if (t479.re == 0.0) {
    t121_re = 0.0;
    t121_im = t479.im / 2.0;
  } else {
    t121_re = t479.re / 2.0;
    t121_im = t479.im / 2.0;
  }

  t115_im += t508_re;
  t76_im += t18_im;
  t70_re = (t70_re + t121_re) + 7.498798913309288E-33;
  t94_im += t121_im;
  t158_im = (t434.re * 0.0 - t434.im * 0.5) - (t435.re * 0.0 - t435.im * 0.5);
  t131_re = (t434.re * 0.5 + t434.im * 0.0) - (t435.re * 0.5 + t435.im * 0.0);
  t158_re_tmp = (((((t436.re * 3.749399456654644E-33 + t437.re *
                     3.749399456654644E-33) + (e_re * t158_re - t40_im * t98_im))
                   + (t98_re * t115_re - t113_re * t158_im_tmp)) - (t127_re *
    t99_re - t127_im * t99_im)) - (t115_im * t70_re - t76_im * t94_im)) -
    3.749399456654644E-33;
  t40_im = ((((t436.im * 3.749399456654644E-33 + t437.im * 3.749399456654644E-33)
              + (e_re * t98_im + t40_im * t158_re)) + (t98_re * t158_im_tmp +
              t113_re * t115_re)) - (t127_re * t99_im + t127_im * t99_re)) -
    (t115_im * t94_im + t76_im * t70_re);
  t121_re = (t490.re * 0.0 - t490.im * 0.5) - (t491.re * 0.0 - t491.im * 0.5);
  t121_im = (t490.re * 0.5 + t490.im * 0.0) - (t491.re * 0.5 + t491.im * 0.0);
  t127_re = (t109.re * 0.0 - t109.im * 3.061616997868383E-17) - (t105.re * 0.0 -
    t105.im * 3.061616997868383E-17);
  t127_im = (t109.re * 3.061616997868383E-17 + t109.im * 0.0) - (t105.re *
    3.061616997868383E-17 + t105.im * 0.0);
  if (t496.im == 0.0) {
    t99_re = t496.re / 2.0;
    t99_im = 0.0;
  } else if (t496.re == 0.0) {
    t99_re = 0.0;
    t99_im = t496.im / 2.0;
  } else {
    t99_re = t496.re / 2.0;
    t99_im = t496.im / 2.0;
  }

  if (t497.im == 0.0) {
    t508_re = t497.re / 2.0;
    t18_im = 0.0;
  } else if (t497.re == 0.0) {
    t508_re = 0.0;
    t18_im = t497.im / 2.0;
  } else {
    t508_re = t497.re / 2.0;
    t18_im = t497.im / 2.0;
  }

  t115_im = t103.re * 3.061616997868383E-17 + t125.re * 3.061616997868383E-17;
  t70_re = t103.im * 3.061616997868383E-17 + t125.im * 3.061616997868383E-17;
  t99_re = (t99_re + t508_re) + 7.498798913309288E-33;
  t99_im += t18_im;
  t158_im_tmp = (t482.re * 0.0 - t482.im * 0.5) - (t483.re * 0.0 - t483.im * 0.5);
  t98_im = (t482.re * 0.5 + t482.im * 0.0) - (t483.re * 0.5 + t483.im * 0.0);
  e_re = (((t484.re * 6.123233995736766E-17 + t485.re * 6.123233995736766E-17) +
           (t121_re * t127_re - t121_im * t127_im)) + (t115_im * t99_re - t70_re
           * t99_im)) - 6.123233995736766E-17;
  t94_im = ((t484.im * 6.123233995736766E-17 + t485.im * 6.123233995736766E-17)
            + (t121_re * t127_im + t121_im * t127_re)) + (t115_im * t99_im +
    t70_re * t99_re);
  if (t498.im == 0.0) {
    t98_re = t498.re / 2.0;
    t113_re = 0.0;
  } else if (t498.re == 0.0) {
    t98_re = 0.0;
    t113_re = t498.im / 2.0;
  } else {
    t98_re = t498.re / 2.0;
    t113_re = t498.im / 2.0;
  }

  if (t499.im == 0.0) {
    t115_im = t499.re / 2.0;
    t76_im = 0.0;
  } else if (t499.re == 0.0) {
    t115_im = 0.0;
    t76_im = t499.im / 2.0;
  } else {
    t115_im = t499.re / 2.0;
    t76_im = t499.im / 2.0;
  }

  if (t123.im == 0.0) {
    t70_re = t123.re / 2.0;
    t115_re = 0.0;
  } else if (t123.re == 0.0) {
    t70_re = 0.0;
    t115_re = t123.im / 2.0;
  } else {
    t70_re = t123.re / 2.0;
    t115_re = t123.im / 2.0;
  }

  if (t119.im == 0.0) {
    t508_re = t119.re / 2.0;
    t18_im = 0.0;
  } else if (t119.re == 0.0) {
    t508_re = 0.0;
    t18_im = t119.im / 2.0;
  } else {
    t508_re = t119.re / 2.0;
    t18_im = t119.im / 2.0;
  }

  t70_re += t508_re;
  t115_re += t18_im;
  t121_re = (t500.re * 0.0 - t500.im * 0.5) - (t501.re * 0.0 - t501.im * 0.5);
  t121_im = (t500.re * 0.5 + t500.im * 0.0) - (t501.re * 0.5 + t501.im * 0.0);
  if (t510.im == 0.0) {
    t127_re = t510.re / 2.0;
    t127_im = 0.0;
  } else if (t510.re == 0.0) {
    t127_re = 0.0;
    t127_im = t510.im / 2.0;
  } else {
    t127_re = t510.re / 2.0;
    t127_im = t510.im / 2.0;
  }

  if (t511.im == 0.0) {
    t508_re = t511.re / 2.0;
    t18_im = 0.0;
  } else if (t511.re == 0.0) {
    t508_re = 0.0;
    t18_im = t511.im / 2.0;
  } else {
    t508_re = t511.re / 2.0;
    t18_im = t511.im / 2.0;
  }

  t99_re = (t117.re * 0.0 - t117.im * 0.5) - (t11.re * 0.0 - t11.im * 0.5);
  t99_im = (t117.re * 0.5 + t117.im * 0.0) - (t11.re * 0.5 + t11.im * 0.0);
  t127_re = (t127_re + t508_re) + 7.498798913309288E-33;
  t127_im += t18_im;
  t98_re += t115_im;
  t113_re += t76_im;
  t115_im = (t70_re * t121_re - t115_re * t121_im) - (t99_re * t127_re - t99_im *
    t127_im);
  t115_re = (t70_re * t121_im + t115_re * t121_re) - (t99_re * t127_im + t99_im *
    t127_re);
  if (t480.im == 0.0) {
    t508_re = t480.re / 2.0;
    t18_im = 0.0;
  } else if (t480.re == 0.0) {
    t508_re = 0.0;
    t18_im = t480.im / 2.0;
  } else {
    t508_re = t480.re / 2.0;
    t18_im = t480.im / 2.0;
  }

  if (t481.im == 0.0) {
    t121_re = t481.re / 2.0;
    t121_im = 0.0;
  } else if (t481.re == 0.0) {
    t121_re = 0.0;
    t121_im = t481.im / 2.0;
  } else {
    t121_re = t481.re / 2.0;
    t121_im = t481.im / 2.0;
  }

  t127_re = (t158_im_tmp * e_re - t98_im * t94_im) - (t98_re * t115_im - t113_re
    * t115_re);
  t98_im = (t158_im_tmp * t94_im + t98_im * e_re) - (t98_re * t115_re + t113_re *
    t115_im);
  t508_re += t121_re;
  t18_im += t121_im;
  b_G_q[4].re = -g * ((t158_im * t158_re_tmp - t131_re * t40_im) * 0.00965 +
                      (t127_re * t508_re - t98_im * t18_im) * 0.00965);
  b_G_q[4].im = -g * ((t158_im * t40_im + t131_re * t158_re_tmp) * 0.00965 +
                      (t127_re * t18_im + t98_im * t508_re) * 0.00965);
  b_G_q[5].re = 0.0;
  b_G_q[5].im = 0.0;
}

/*
 * File trailer for G_q.c
 *
 * [EOF]
 */
