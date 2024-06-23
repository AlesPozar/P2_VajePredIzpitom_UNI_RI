
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {1799, 1708, 1726, 1844, 1835, 1924, 1872, 1789, 1822, 1846, 1865, 2005, 1877, 1911, 1973, 1945, 2023, 1950, 1965, 1975, 2023, 2023, 2009, 1927, 2023, 1979, 1975, 1941, 1991, 2023, 1981, 2023, 2023, 1893, 1987, 1846, 1996, 1929, 1934, 1899, 1950, 1940, 1867, 1871, 1828, 1845, 1679, 1733, 1732, 1791, 1761, 1636, 1625, 1625, 1657, 1520, 1554, 1544, 1473, 1459, 1449, 1380, 1411, 1432, 1273, 1292, 1223, 1223, 1269, 1186, 1072},
    (int[]) {1824, 1687, 1810, 1874, 1846, 1847, 1881, 1942, 1916, 1851, 1938, 1989, 1979, 1970, 1886, 1945, 2009, 1953, 1933, 2000, 1925, 1996, 2023, 1928, 1947, 1947, 1938, 1980, 2023, 2023, 2023, 2023, 1877, 1938, 1927, 1853, 1889, 1835, 1829, 1901, 1859, 1812, 1799, 1867, 1902, 1705, 1817, 1698, 1715, 1753, 1747, 1574, 1696, 1635, 1548, 1565, 1471, 1454, 1421, 1471, 1399, 1332, 1347, 1400, 1238, 1262, 1277, 1157, 1203, 1164, 1158},
    (int[]) {1711, 1832, 1758, 1869, 1741, 1762, 1889, 1883, 1829, 1946, 1851, 1839, 1934, 2016, 1866, 1883, 2011, 1933, 2023, 1932, 1910, 1926, 1998, 2023, 2009, 2023, 1982, 2023, 1948, 2023, 1987, 1976, 2023, 1910, 2009, 1982, 1850, 1933, 1944, 1927, 1987, 1804, 1765, 1775, 1890, 1782, 1738, 1814, 1667, 1735, 1782, 1596, 1653, 1589, 1547, 1589, 1566, 1444, 1402, 1379, 1540, 1344, 1489, 1331, 1352, 1316, 1234, 1224, 1206, 1273, 1086},
    (int[]) {1827, 1816, 1766, 1880, 1886, 1894, 1797, 1912, 1835, 1873, 1836, 1933, 2005, 1929, 1968, 2023, 1899, 2023, 2005, 1921, 1946, 2005, 1979, 2023, 1931, 2023, 1969, 2023, 2023, 1919, 1987, 2023, 2023, 2023, 1874, 1915, 1966, 2022, 1857, 1955, 1969, 1940, 1794, 1761, 1884, 1830, 1867, 1819, 1724, 1666, 1648, 1595, 1678, 1647, 1581, 1512, 1503, 1552, 1520, 1527, 1433, 1516, 1345, 1428, 1310, 1265, 1187, 1293, 1315, 1183, 1153},
    (int[]) {1715, 1811, 1816, 1764, 1899, 1744, 1921, 1969, 1916, 2003, 1874, 1946, 1986, 2002, 1878, 1908, 2023, 1934, 1957, 2023, 2023, 1950, 2023, 2022, 2023, 1944, 2023, 2008, 2023, 2023, 2008, 2005, 1934, 1925, 2015, 2023, 1946, 1924, 1928, 1974, 1795, 1832, 1824, 1911, 1909, 1709, 1842, 1810, 1698, 1662, 1720, 1722, 1692, 1577, 1660, 1551, 1612, 1629, 1473, 1551, 1509, 1520, 1415, 1447, 1255, 1342, 1362, 1215, 1260, 1297, 1166},
    (int[]) {1688, 1778, 1780, 1874, 1846, 1907, 1931, 1833, 1905, 1828, 1979, 1865, 1907, 1920, 2023, 1970, 2006, 2023, 2023, 1982, 2023, 1919, 2023, 1951, 2013, 1956, 2023, 2023, 2023, 1910, 1938, 2023, 2023, 1949, 2023, 2023, 1876, 1845, 1911, 1902, 1818, 1901, 1783, 1895, 1750, 1776, 1848, 1807, 1785, 1698, 1613, 1739, 1665, 1704, 1509, 1499, 1608, 1461, 1442, 1568, 1479, 1363, 1470, 1276, 1418, 1383, 1216, 1192, 1304, 1154, 1227},
    (int[]) {1828, 1842, 1823, 1723, 1837, 1772, 1777, 1802, 1827, 1995, 1882, 1961, 2018, 1975, 1964, 1949, 2015, 2023, 1904, 1979, 2000, 1964, 1927, 2023, 2023, 2021, 2023, 1991, 2014, 1913, 2023, 1956, 2023, 1910, 1937, 1877, 1858, 1945, 1896, 1956, 1906, 1919, 1933, 1824, 1758, 1840, 1873, 1708, 1695, 1779, 1775, 1775, 1726, 1573, 1632, 1640, 1658, 1531, 1434, 1414, 1410, 1340, 1429, 1333, 1360, 1323, 1261, 1200, 1174, 1217, 1223},
    (int[]) {1743, 1849, 1734, 1757, 1810, 1894, 1845, 1784, 1830, 1825, 1853, 2015, 1971, 2023, 1968, 1924, 1968, 2008, 2023, 1917, 2023, 2023, 1983, 1935, 1956, 2023, 2019, 1930, 2023, 1947, 2023, 1928, 1988, 1949, 1982, 1983, 2002, 2011, 1875, 1992, 1815, 1826, 1810, 1924, 1912, 1758, 1843, 1847, 1710, 1676, 1715, 1653, 1584, 1720, 1514, 1515, 1511, 1579, 1435, 1575, 1462, 1387, 1423, 1393, 1380, 1310, 1235, 1354, 1232, 1232, 1185},
    (int[]) {1815, 1803, 1839, 1849, 1732, 1912, 1937, 1954, 1913, 1812, 1952, 1998, 2002, 1905, 1989, 1997, 1919, 1965, 1986, 1999, 2023, 2023, 2023, 2023, 1942, 2021, 1970, 2023, 2023, 2023, 2023, 2023, 1983, 1988, 2023, 1985, 1947, 1895, 1908, 1909, 1940, 1885, 1921, 1828, 1767, 1771, 1760, 1819, 1821, 1662, 1723, 1753, 1579, 1627, 1656, 1673, 1578, 1584, 1405, 1570, 1401, 1445, 1452, 1341, 1366, 1305, 1323, 1325, 1168, 1116, 1227},
    (int[]) {1783, 1755, 1816, 1805, 1863, 1793, 1861, 1969, 1855, 1855, 1899, 1898, 1897, 1974, 1944, 1878, 1938, 2000, 1936, 1988, 1948, 1921, 2023, 1972, 1942, 2009, 2005, 2023, 2023, 1939, 2012, 2020, 2010, 2023, 1910, 2011, 1995, 1839, 2018, 1945, 1930, 1970, 1956, 1834, 1900, 1853, 1743, 1696, 1837, 1754, 1671, 1606, 1711, 1545, 1633, 1653, 1471, 1588, 1491, 1440, 1441, 1449, 1457, 1314, 1344, 1303, 1335, 1348, 1283, 1210, 1185},
    (int[]) {1733, 1827, 1758, 1894, 1839, 1828, 1875, 1813, 1976, 1919, 1930, 1867, 1955, 1857, 2002, 2023, 2023, 1932, 2023, 1925, 2023, 2023, 1932, 2023, 1978, 1996, 1972, 2005, 1957, 1995, 2023, 1918, 1978, 2014, 2007, 1965, 1883, 1890, 1893, 1880, 1878, 1807, 1824, 1919, 1856, 1731, 1711, 1719, 1666, 1792, 1707, 1771, 1602, 1703, 1604, 1616, 1493, 1623, 1538, 1391, 1512, 1472, 1477, 1325, 1381, 1379, 1211, 1187, 1251, 1235, 1215},
    (int[]) {1707, 1755, 1676, 1725, 1760, 1925, 1948, 1790, 1933, 1902, 1975, 1982, 1869, 2009, 2023, 1902, 2002, 1988, 1903, 1903, 2023, 1970, 2017, 1968, 1946, 2023, 1940, 2023, 1911, 2023, 1978, 1936, 1952, 2001, 2012, 1899, 1937, 1966, 1916, 1841, 1785, 1839, 1765, 1897, 1869, 1766, 1782, 1770, 1752, 1681, 1719, 1688, 1722, 1677, 1673, 1652, 1575, 1560, 1519, 1389, 1503, 1485, 1365, 1416, 1310, 1321, 1310, 1269, 1227, 1199, 1209},
    (int[]) {1714, 1769, 1700, 1708, 1893, 1926, 1856, 1764, 1966, 1947, 1908, 2003, 1978, 1969, 2023, 1916, 2023, 1986, 1942, 1993, 2023, 2023, 2023, 1935, 1938, 1976, 2015, 2023, 2023, 1956, 1909, 1881, 1872, 1934, 1985, 1887, 1906, 1986, 1853, 1889, 1935, 1943, 1874, 1784, 1773, 1811, 1778, 1652, 1758, 1774, 1722, 1593, 1721, 1661, 1558, 1577, 1612, 1455, 1458, 1489, 1384, 1327, 1354, 1365, 1275, 1294, 1235, 1179, 1299, 1147, 1244},
    (int[]) {1659, 1826, 1671, 1699, 1812, 1748, 1928, 1766, 1936, 1867, 1883, 1841, 1906, 1952, 1944, 1961, 1900, 2015, 2004, 1903, 1916, 1957, 2023, 2023, 1931, 1924, 2023, 1993, 2023, 1899, 1965, 1951, 1942, 1984, 2000, 1845, 1857, 1995, 1840, 1896, 1841, 1759, 1819, 1820, 1836, 1816, 1772, 1751, 1787, 1772, 1748, 1654, 1582, 1518, 1664, 1655, 1542, 1510, 1438, 1531, 1514, 1478, 1353, 1306, 1388, 1373, 1309, 1252, 1168, 1200, 1090},
    (int[]) {1674, 1830, 1782, 1828, 1700, 1746, 1915, 1781, 1834, 1784, 1948, 1926, 1889, 1888, 2023, 2017, 1934, 1974, 2023, 1906, 1981, 1900, 2023, 1952, 1900, 2023, 1942, 2023, 2021, 2023, 2023, 2023, 1948, 2019, 1904, 1902, 2013, 1887, 1835, 1940, 1835, 1801, 1914, 1872, 1804, 1706, 1795, 1838, 1782, 1735, 1716, 1582, 1646, 1639, 1594, 1493, 1531, 1598, 1394, 1374, 1364, 1455, 1429, 1424, 1414, 1229, 1214, 1144, 1129, 1132, 1255},
    (int[]) {1663, 1793, 1756, 1707, 1879, 1843, 1911, 1849, 1935, 1827, 1870, 1839, 1817, 1959, 1894, 2005, 1927, 2023, 1901, 1909, 1964, 2023, 1930, 2023, 2001, 1899, 2006, 2023, 1931, 1911, 2022, 1881, 1943, 1843, 1987, 1995, 1861, 1972, 1865, 1876, 1797, 1920, 1849, 1767, 1721, 1736, 1671, 1776, 1724, 1688, 1751, 1620, 1673, 1679, 1617, 1629, 1508, 1401, 1555, 1381, 1524, 1458, 1276, 1259, 1225, 1282, 1270, 1197, 1255, 1139, 1055},
    (int[]) {1720, 1693, 1682, 1847, 1786, 1797, 1765, 1846, 1822, 1814, 1833, 1934, 1826, 1979, 1855, 1937, 1994, 1872, 1905, 2023, 2000, 1898, 1896, 1925, 1924, 2005, 2012, 1977, 1969, 1942, 1973, 2018, 1940, 2007, 1954, 1878, 1990, 1982, 1783, 1795, 1947, 1876, 1758, 1795, 1880, 1742, 1781, 1766, 1738, 1661, 1572, 1663, 1573, 1527, 1636, 1443, 1462, 1541, 1437, 1394, 1500, 1476, 1295, 1398, 1272, 1215, 1333, 1245, 1180, 1258, 1180},
    (int[]) {1769, 1628, 1647, 1829, 1784, 1800, 1868, 1907, 1807, 1897, 1939, 1805, 1979, 1832, 1949, 1963, 1973, 1884, 2023, 2023, 1916, 2014, 1976, 1977, 1972, 1893, 1908, 2023, 1941, 1962, 1880, 2022, 1902, 1893, 1822, 1969, 1809, 1837, 1801, 1949, 1826, 1844, 1781, 1861, 1762, 1722, 1813, 1649, 1682, 1624, 1583, 1620, 1515, 1519, 1528, 1529, 1544, 1445, 1517, 1515, 1507, 1381, 1398, 1353, 1272, 1196, 1184, 1240, 1147, 1258, 1172},
    (int[]) {1619, 1729, 1700, 1774, 1835, 1827, 1885, 1758, 1755, 1796, 1831, 1835, 1894, 1946, 1868, 1916, 1910, 1938, 1896, 1909, 2023, 1851, 1868, 2016, 1999, 1896, 2020, 2023, 1934, 1884, 1892, 1831, 1911, 1823, 1876, 1981, 1849, 1834, 1817, 1850, 1839, 1781, 1836, 1834, 1836, 1712, 1669, 1804, 1662, 1740, 1705, 1610, 1524, 1585, 1468, 1548, 1452, 1461, 1517, 1421, 1423, 1426, 1263, 1335, 1341, 1364, 1324, 1161, 1253, 1118, 1191},
    (int[]) {1667, 1641, 1782, 1821, 1838, 1856, 1839, 1790, 1781, 1894, 1787, 1820, 1964, 1801, 1951, 1808, 1941, 1891, 1926, 2022, 1865, 1868, 2010, 1912, 2011, 1875, 2023, 1837, 1839, 1829, 1958, 1839, 1996, 1806, 1917, 1830, 1767, 1885, 1826, 1924, 1891, 1878, 1779, 1756, 1764, 1657, 1699, 1612, 1773, 1652, 1626, 1583, 1640, 1477, 1502, 1465, 1476, 1381, 1393, 1507, 1476, 1287, 1421, 1370, 1280, 1253, 1334, 1150, 1277, 1198, 1149},
    (int[]) {1605, 1640, 1701, 1733, 1776, 1797, 1684, 1827, 1804, 1824, 1833, 1867, 1932, 1802, 1951, 1859, 1892, 1824, 1915, 1921, 1946, 1997, 2009, 1926, 1939, 1865, 1985, 1907, 1863, 1835, 1945, 1972, 1891, 1971, 1945, 1791, 1927, 1844, 1876, 1811, 1706, 1802, 1720, 1765, 1751, 1708, 1718, 1687, 1565, 1629, 1675, 1588, 1618, 1534, 1534, 1422, 1534, 1445, 1479, 1417, 1474, 1398, 1361, 1220, 1305, 1208, 1325, 1165, 1234, 1224, 1027},
    (int[]) {1584, 1598, 1717, 1763, 1824, 1688, 1812, 1820, 1811, 1731, 1828, 1887, 1904, 1886, 1946, 1935, 1855, 1873, 1953, 1865, 1828, 1882, 1824, 1930, 1961, 1880, 1897, 1872, 1994, 1977, 1853, 1974, 1967, 1853, 1873, 1752, 1898, 1791, 1791, 1776, 1813, 1838, 1825, 1839, 1641, 1609, 1596, 1711, 1580, 1576, 1707, 1605, 1493, 1616, 1570, 1512, 1388, 1368, 1421, 1348, 1457, 1325, 1223, 1236, 1186, 1258, 1124, 1174, 1088, 1132, 1072},
    (int[]) {1588, 1743, 1753, 1725, 1797, 1652, 1651, 1807, 1766, 1802, 1867, 1838, 1853, 1784, 1788, 1813, 1933, 1805, 1778, 1891, 1812, 1888, 1920, 1901, 1808, 1852, 1906, 1976, 1795, 1924, 1879, 1835, 1864, 1770, 1816, 1855, 1821, 1899, 1830, 1828, 1766, 1662, 1724, 1695, 1660, 1748, 1772, 1721, 1679, 1679, 1647, 1554, 1610, 1503, 1447, 1463, 1519, 1404, 1412, 1402, 1438, 1322, 1284, 1232, 1200, 1275, 1263, 1190, 1142, 1060, 1062},
    (int[]) {1559, 1562, 1710, 1703, 1716, 1800, 1770, 1817, 1702, 1746, 1797, 1747, 1751, 1861, 1929, 1783, 1944, 1914, 1827, 1851, 1888, 1941, 1936, 1902, 1830, 1946, 1916, 1791, 1952, 1887, 1762, 1916, 1874, 1814, 1881, 1883, 1890, 1860, 1798, 1716, 1765, 1832, 1789, 1638, 1720, 1650, 1744, 1669, 1697, 1680, 1544, 1655, 1449, 1608, 1537, 1469, 1431, 1377, 1355, 1432, 1252, 1341, 1294, 1339, 1172, 1276, 1176, 1118, 1066, 1076, 1059},
    (int[]) {1551, 1595, 1728, 1627, 1693, 1664, 1770, 1707, 1716, 1828, 1758, 1800, 1772, 1806, 1788, 1745, 1878, 1882, 1855, 1796, 1836, 1761, 1790, 1895, 1919, 1848, 1834, 1789, 1873, 1878, 1846, 1779, 1899, 1918, 1727, 1882, 1696, 1857, 1696, 1844, 1657, 1763, 1701, 1728, 1716, 1600, 1600, 1703, 1518, 1526, 1624, 1472, 1612, 1512, 1417, 1443, 1393, 1501, 1296, 1432, 1304, 1253, 1219, 1193, 1164, 1139, 1196, 1114, 1067, 1088, 1058},
    (int[]) {1613, 1707, 1530, 1649, 1654, 1757, 1679, 1738, 1737, 1749, 1659, 1835, 1868, 1790, 1875, 1734, 1803, 1904, 1899, 1919, 1814, 1801, 1876, 1914, 1936, 1944, 1847, 1939, 1915, 1890, 1884, 1775, 1791, 1835, 1825, 1847, 1823, 1815, 1808, 1789, 1812, 1698, 1598, 1622, 1689, 1641, 1657, 1552, 1632, 1545, 1527, 1444, 1512, 1574, 1443, 1500, 1464, 1371, 1385, 1305, 1298, 1241, 1286, 1251, 1299, 1210, 1179, 1179, 1045, 1077, 1163},
    (int[]) {1569, 1498, 1583, 1686, 1675, 1759, 1665, 1597, 1696, 1728, 1686, 1649, 1767, 1685, 1831, 1863, 1798, 1748, 1765, 1750, 1912, 1870, 1768, 1917, 1787, 1858, 1884, 1820, 1784, 1856, 1768, 1875, 1750, 1774, 1693, 1706, 1678, 1812, 1765, 1772, 1769, 1673, 1611, 1733, 1552, 1675, 1651, 1645, 1644, 1618, 1444, 1616, 1558, 1434, 1353, 1365, 1433, 1438, 1354, 1351, 1397, 1246, 1253, 1295, 1117, 1127, 1080, 1128, 1187, 1158, 1110},
    (int[]) {1489, 1513, 1578, 1515, 1585, 1702, 1682, 1701, 1684, 1755, 1674, 1748, 1644, 1775, 1833, 1733, 1818, 1873, 1748, 1869, 1770, 1901, 1748, 1714, 1899, 1864, 1818, 1779, 1891, 1718, 1882, 1876, 1719, 1863, 1770, 1842, 1693, 1769, 1795, 1629, 1654, 1668, 1661, 1550, 1584, 1583, 1582, 1610, 1632, 1576, 1513, 1486, 1476, 1411, 1429, 1477, 1296, 1363, 1372, 1272, 1341, 1266, 1249, 1169, 1203, 1135, 1087, 1036, 1096, 1012, 1096},
    (int[]) {1636, 1634, 1496, 1692, 1583, 1729, 1697, 1732, 1723, 1647, 1676, 1778, 1767, 1689, 1693, 1673, 1775, 1671, 1829, 1792, 1857, 1701, 1707, 1788, 1866, 1798, 1741, 1697, 1829, 1698, 1755, 1755, 1766, 1696, 1717, 1804, 1730, 1790, 1774, 1746, 1592, 1714, 1745, 1608, 1628, 1688, 1628, 1469, 1528, 1590, 1482, 1546, 1374, 1503, 1412, 1450, 1331, 1357, 1294, 1375, 1208, 1295, 1154, 1256, 1279, 1214, 1125, 1167, 1142, 1030, 1007},
    (int[]) {1581, 1467, 1482, 1580, 1694, 1548, 1652, 1595, 1680, 1603, 1616, 1747, 1691, 1777, 1655, 1803, 1743, 1657, 1705, 1843, 1782, 1819, 1739, 1781, 1855, 1736, 1862, 1703, 1697, 1693, 1702, 1728, 1654, 1632, 1761, 1798, 1638, 1743, 1766, 1658, 1721, 1659, 1674, 1618, 1661, 1501, 1467, 1484, 1520, 1472, 1395, 1484, 1387, 1421, 1406, 1451, 1357, 1364, 1218, 1254, 1304, 1278, 1204, 1253, 1109, 1104, 1040, 1175, 1062, 968, 1067},
    (int[]) {1550, 1479, 1463, 1628, 1494, 1661, 1663, 1662, 1736, 1649, 1742, 1587, 1704, 1615, 1681, 1795, 1669, 1728, 1770, 1645, 1657, 1679, 1738, 1826, 1686, 1754, 1723, 1655, 1643, 1683, 1705, 1669, 1679, 1647, 1606, 1767, 1593, 1681, 1703, 1720, 1561, 1537, 1665, 1534, 1530, 1516, 1602, 1473, 1458, 1523, 1452, 1362, 1414, 1411, 1432, 1418, 1436, 1246, 1242, 1300, 1281, 1165, 1213, 1126, 1104, 1073, 1157, 1118, 1100, 1107, 925},
    (int[]) {1538, 1451, 1492, 1505, 1623, 1556, 1677, 1544, 1643, 1674, 1621, 1577, 1635, 1747, 1618, 1768, 1649, 1753, 1779, 1756, 1709, 1809, 1646, 1641, 1677, 1734, 1809, 1681, 1617, 1652, 1729, 1720, 1744, 1606, 1624, 1700, 1761, 1646, 1541, 1606, 1692, 1633, 1536, 1630, 1515, 1560, 1476, 1505, 1413, 1512, 1550, 1383, 1322, 1358, 1332, 1344, 1392, 1284, 1293, 1244, 1242, 1212, 1256, 1189, 1181, 1045, 1174, 1020, 1011, 1020, 989},
    (int[]) {1505, 1473, 1449, 1520, 1556, 1615, 1635, 1536, 1678, 1646, 1694, 1722, 1598, 1600, 1750, 1600, 1767, 1780, 1735, 1646, 1708, 1748, 1601, 1801, 1783, 1682, 1709, 1733, 1776, 1604, 1628, 1608, 1728, 1741, 1750, 1612, 1614, 1661, 1672, 1639, 1612, 1681, 1580, 1501, 1476, 1475, 1430, 1493, 1450, 1536, 1449, 1506, 1363, 1474, 1318, 1267, 1304, 1217, 1256, 1316, 1140, 1117, 1189, 1237, 1033, 1051, 990, 1039, 1051, 1069, 1020},
    (int[]) {1429, 1498, 1417, 1487, 1423, 1605, 1520, 1596, 1608, 1630, 1693, 1526, 1632, 1684, 1576, 1719, 1695, 1714, 1757, 1611, 1772, 1581, 1769, 1734, 1648, 1729, 1608, 1607, 1595, 1606, 1733, 1727, 1626, 1558, 1700, 1623, 1640, 1598, 1647, 1673, 1617, 1605, 1562, 1560, 1474, 1586, 1477, 1541, 1475, 1373, 1482, 1378, 1463, 1300, 1344, 1383, 1254, 1371, 1328, 1230, 1208, 1267, 1111, 1218, 1136, 1055, 1154, 1128, 1028, 956, 938},
    (int[]) {1365, 1456, 1418, 1389, 1401, 1499, 1526, 1503, 1464, 1610, 1634, 1634, 1674, 1647, 1609, 1640, 1558, 1540, 1717, 1714, 1723, 1565, 1689, 1651, 1581, 1571, 1708, 1635, 1635, 1663, 1588, 1700, 1545, 1639, 1598, 1697, 1516, 1496, 1669, 1580, 1539, 1498, 1459, 1461, 1494, 1424, 1525, 1453, 1357, 1386, 1370, 1452, 1302, 1270, 1282, 1203, 1339, 1274, 1182, 1187, 1245, 1262, 1201, 1041, 1022, 1086, 1031, 1029, 953, 1079, 1012},
    (int[]) {1334, 1430, 1388, 1453, 1564, 1398, 1600, 1442, 1533, 1531, 1472, 1655, 1599, 1573, 1554, 1697, 1520, 1522, 1688, 1719, 1692, 1654, 1675, 1547, 1623, 1647, 1589, 1610, 1581, 1642, 1523, 1522, 1508, 1660, 1571, 1579, 1522, 1566, 1501, 1529, 1458, 1582, 1558, 1538, 1513, 1439, 1359, 1450, 1449, 1412, 1444, 1379, 1426, 1228, 1326, 1239, 1215, 1244, 1284, 1196, 1166, 1060, 1095, 1190, 1056, 1155, 962, 1102, 972, 936, 917},
    (int[]) {1288, 1339, 1520, 1414, 1426, 1566, 1546, 1409, 1457, 1472, 1523, 1510, 1606, 1483, 1591, 1575, 1652, 1517, 1687, 1666, 1518, 1563, 1641, 1574, 1638, 1580, 1673, 1684, 1617, 1554, 1684, 1530, 1650, 1492, 1591, 1659, 1546, 1572, 1448, 1477, 1499, 1500, 1540, 1514, 1431, 1526, 1453, 1388, 1439, 1450, 1386, 1279, 1303, 1223, 1368, 1330, 1292, 1181, 1139, 1082, 1107, 1055, 1088, 1062, 1008, 1058, 1076, 1014, 1002, 1019, 911},
    (int[]) {1286, 1475, 1401, 1472, 1445, 1518, 1420, 1483, 1492, 1559, 1408, 1507, 1568, 1599, 1544, 1601, 1629, 1658, 1541, 1649, 1495, 1624, 1615, 1602, 1612, 1493, 1650, 1540, 1551, 1587, 1516, 1623, 1494, 1553, 1579, 1451, 1590, 1446, 1572, 1521, 1441, 1456, 1437, 1496, 1416, 1335, 1456, 1337, 1433, 1407, 1314, 1366, 1383, 1212, 1344, 1172, 1207, 1175, 1103, 1140, 1189, 1139, 1107, 1084, 1136, 962, 1039, 999, 958, 904, 1021},
    (int[]) {1363, 1334, 1298, 1407, 1452, 1463, 1475, 1426, 1478, 1467, 1486, 1528, 1482, 1606, 1496, 1477, 1554, 1440, 1449, 1584, 1610, 1585, 1615, 1618, 1578, 1583, 1515, 1521, 1496, 1496, 1622, 1528, 1556, 1478, 1478, 1437, 1505, 1504, 1389, 1406, 1547, 1405, 1448, 1511, 1397, 1438, 1305, 1380, 1378, 1255, 1285, 1238, 1366, 1229, 1271, 1179, 1140, 1107, 1197, 1193, 1094, 1038, 1100, 1130, 989, 1114, 1089, 991, 925, 959, 837},
    (int[]) {1256, 1421, 1323, 1395, 1453, 1407, 1440, 1338, 1427, 1370, 1374, 1480, 1418, 1517, 1534, 1438, 1586, 1472, 1535, 1513, 1557, 1592, 1613, 1554, 1566, 1456, 1496, 1508, 1591, 1470, 1585, 1480, 1453, 1480, 1493, 1538, 1520, 1528, 1537, 1364, 1382, 1450, 1401, 1298, 1357, 1421, 1259, 1243, 1363, 1267, 1376, 1275, 1285, 1151, 1221, 1234, 1243, 1243, 1094, 1098, 1088, 1103, 986, 1091, 1108, 1081, 939, 859, 995, 897, 921},
    (int[]) {1282, 1409, 1248, 1407, 1386, 1464, 1452, 1481, 1493, 1384, 1376, 1537, 1492, 1555, 1564, 1388, 1469, 1440, 1543, 1455, 1542, 1450, 1427, 1577, 1551, 1479, 1476, 1414, 1496, 1497, 1578, 1403, 1417, 1424, 1498, 1378, 1520, 1444, 1399, 1324, 1445, 1458, 1429, 1461, 1272, 1372, 1280, 1302, 1285, 1276, 1359, 1344, 1250, 1168, 1120, 1158, 1172, 1205, 1140, 1054, 1007, 1151, 1068, 996, 1101, 962, 894, 1011, 827, 979, 971},
    (int[]) {1189, 1380, 1311, 1375, 1266, 1403, 1368, 1304, 1408, 1433, 1416, 1442, 1395, 1437, 1355, 1449, 1402, 1450, 1468, 1567, 1473, 1497, 1516, 1411, 1471, 1499, 1452, 1531, 1552, 1531, 1451, 1419, 1430, 1442, 1499, 1386, 1518, 1447, 1350, 1371, 1397, 1282, 1377, 1445, 1333, 1323, 1405, 1258, 1328, 1202, 1242, 1297, 1222, 1250, 1225, 1242, 1096, 1024, 1026, 1072, 1021, 1084, 970, 955, 1083, 981, 1027, 893, 873, 884, 887},
    (int[]) {1308, 1282, 1337, 1305, 1326, 1226, 1367, 1369, 1326, 1396, 1404, 1364, 1373, 1509, 1406, 1460, 1360, 1457, 1505, 1452, 1351, 1419, 1514, 1548, 1394, 1469, 1467, 1353, 1498, 1400, 1377, 1339, 1449, 1481, 1481, 1450, 1454, 1319, 1447, 1305, 1341, 1404, 1286, 1271, 1345, 1341, 1334, 1301, 1269, 1141, 1267, 1113, 1150, 1239, 1162, 1139, 1145, 1118, 996, 977, 1000, 1084, 1000, 934, 963, 865, 930, 977, 906, 869, 837},
    (int[]) {1251, 1327, 1349, 1308, 1291, 1241, 1215, 1318, 1388, 1360, 1346, 1444, 1316, 1422, 1314, 1416, 1352, 1470, 1505, 1390, 1487, 1391, 1488, 1399, 1520, 1368, 1398, 1463, 1347, 1467, 1478, 1422, 1489, 1382, 1426, 1313, 1282, 1404, 1406, 1344, 1323, 1356, 1361, 1396, 1378, 1251, 1199, 1308, 1173, 1273, 1191, 1156, 1168, 1196, 1214, 1196, 1033, 1097, 1041, 1052, 998, 1028, 1006, 965, 1018, 942, 833, 929, 939, 866, 801},
    (int[]) {1201, 1280, 1310, 1350, 1262, 1264, 1358, 1369, 1319, 1413, 1384, 1284, 1250, 1304, 1460, 1375, 1303, 1428, 1349, 1347, 1447, 1461, 1445, 1335, 1336, 1410, 1350, 1386, 1386, 1404, 1462, 1451, 1414, 1430, 1414, 1316, 1305, 1353, 1265, 1322, 1340, 1229, 1299, 1198, 1293, 1315, 1150, 1202, 1133, 1257, 1111, 1111, 1231, 1189, 1172, 1019, 1145, 1028, 967, 931, 1063, 1001, 949, 882, 900, 903, 804, 851, 841, 864, 755},
    (int[]) {1108, 1112, 1196, 1127, 1301, 1215, 1322, 1302, 1330, 1260, 1383, 1314, 1257, 1317, 1286, 1332, 1291, 1390, 1435, 1436, 1375, 1355, 1424, 1413, 1432, 1343, 1303, 1455, 1450, 1315, 1276, 1455, 1260, 1315, 1310, 1368, 1343, 1393, 1212, 1253, 1272, 1195, 1291, 1298, 1267, 1201, 1261, 1133, 1264, 1159, 1245, 1193, 1097, 1028, 1106, 1057, 1093, 1043, 1120, 1074, 987, 897, 1036, 1016, 862, 853, 914, 816, 750, 824, 774},
    (int[]) {1093, 1258, 1106, 1146, 1196, 1216, 1254, 1177, 1261, 1220, 1191, 1296, 1315, 1301, 1376, 1381, 1288, 1311, 1418, 1246, 1277, 1297, 1330, 1388, 1346, 1283, 1250, 1359, 1302, 1328, 1245, 1366, 1271, 1344, 1289, 1376, 1217, 1358, 1367, 1270, 1222, 1201, 1248, 1237, 1142, 1218, 1281, 1139, 1148, 1114, 1111, 1139, 1022, 1054, 1000, 1045, 1045, 942, 1019, 947, 949, 888, 1025, 995, 947, 919, 901, 764, 898, 876, 847},
    (int[]) {1128, 1123, 1102, 1164, 1183, 1276, 1250, 1217, 1274, 1148, 1177, 1288, 1255, 1317, 1245, 1280, 1278, 1249, 1371, 1368, 1247, 1350, 1308, 1354, 1313, 1287, 1397, 1302, 1312, 1304, 1245, 1277, 1343, 1291, 1321, 1181, 1267, 1306, 1183, 1177, 1224, 1137, 1166, 1283, 1259, 1095, 1086, 1111, 1196, 1102, 1093, 1044, 1031, 1072, 985, 951, 979, 957, 1029, 990, 946, 963, 1003, 829, 905, 812, 786, 797, 848, 798, 808},
    (int[]) {1089, 1058, 1110, 1074, 1192, 1141, 1182, 1177, 1286, 1282, 1300, 1137, 1305, 1232, 1222, 1232, 1353, 1305, 1181, 1211, 1366, 1332, 1385, 1273, 1224, 1372, 1300, 1242, 1247, 1353, 1365, 1333, 1258, 1311, 1275, 1229, 1341, 1241, 1255, 1243, 1167, 1227, 1276, 1146, 1232, 1122, 1147, 1193, 1130, 1026, 1137, 983, 1017, 1036, 970, 989, 949, 948, 882, 844, 923, 998, 861, 905, 790, 883, 771, 792, 719, 824, 799},
    (int[]) {1077, 1012, 1177, 1159, 1198, 1081, 1063, 1074, 1212, 1162, 1292, 1224, 1306, 1268, 1273, 1294, 1342, 1161, 1272, 1215, 1167, 1323, 1165, 1299, 1314, 1224, 1250, 1256, 1226, 1257, 1303, 1147, 1166, 1301, 1215, 1273, 1309, 1233, 1248, 1116, 1272, 1075, 1168, 1112, 1103, 1083, 1024, 1005, 1083, 1063, 981, 1088, 1086, 991, 973, 922, 998, 904, 849, 903, 877, 887, 863, 923, 764, 821, 852, 761, 682, 778, 828},
    (int[]) {1090, 1065, 1028, 1126, 1092, 1140, 1140, 1114, 1251, 1072, 1173, 1255, 1246, 1117, 1185, 1118, 1131, 1123, 1283, 1299, 1269, 1306, 1240, 1160, 1194, 1188, 1161, 1195, 1281, 1297, 1281, 1315, 1127, 1273, 1147, 1208, 1269, 1224, 1214, 1253, 1212, 1211, 1225, 1217, 1092, 1031, 1122, 1118, 1052, 1081, 1036, 975, 952, 1031, 1046, 908, 897, 1035, 867, 891, 824, 965, 923, 824, 917, 722, 827, 819, 800, 720, 632},
    (int[]) {1138, 1032, 1160, 1036, 1170, 1087, 1190, 1031, 1049, 1065, 1054, 1063, 1098, 1198, 1139, 1144, 1269, 1170, 1212, 1116, 1160, 1279, 1192, 1282, 1125, 1274, 1276, 1190, 1127, 1129, 1109, 1229, 1162, 1160, 1126, 1223, 1118, 1216, 1148, 1156, 1070, 1203, 1140, 1131, 1017, 1080, 1003, 977, 1114, 1123, 930, 1011, 936, 947, 941, 893, 1020, 936, 985, 935, 927, 879, 746, 775, 850, 788, 809, 742, 750, 773, 627},
    (int[]) {1090, 1096, 977, 1027, 1025, 1136, 1048, 1114, 1090, 1148, 1213, 1209, 1144, 1064, 1076, 1136, 1106, 1136, 1194, 1186, 1155, 1190, 1233, 1208, 1203, 1226, 1255, 1221, 1139, 1227, 1131, 1248, 1212, 1061, 1217, 1091, 1232, 1159, 1146, 1091, 1067, 1081, 1104, 1059, 1029, 1120, 947, 955, 932, 1025, 1060, 881, 1047, 1014, 861, 947, 813, 916, 837, 916, 936, 761, 834, 758, 775, 774, 706, 655, 806, 773, 693},
    (int[]) {1034, 1023, 1111, 1076, 1061, 1055, 1011, 1035, 989, 1107, 1045, 1095, 1102, 1124, 1148, 1225, 1136, 1166, 1165, 1070, 1245, 1143, 1217, 1144, 1159, 1086, 1065, 1199, 1190, 1178, 1156, 1084, 1229, 1179, 1089, 1169, 1098, 1122, 1107, 1108, 1009, 974, 1107, 1104, 1069, 1044, 993, 1076, 966, 893, 911, 1034, 962, 984, 887, 920, 851, 952, 930, 791, 885, 841, 875, 807, 855, 794, 651, 660, 627, 771, 675},
    (int[]) {955, 1043, 934, 1010, 1035, 989, 1067, 1047, 969, 1102, 1104, 1049, 1134, 1012, 1151, 1137, 1117, 1077, 1026, 1074, 1192, 1189, 1122, 1194, 1094, 1066, 1114, 1173, 1189, 1114, 1104, 1198, 1140, 1164, 1070, 1156, 1023, 1139, 1054, 1096, 1054, 1065, 966, 1005, 1064, 1091, 1075, 1065, 911, 858, 958, 876, 1002, 977, 848, 894, 771, 881, 788, 739, 847, 720, 706, 847, 669, 821, 640, 798, 668, 623, 643},
    (int[]) {995, 926, 881, 1001, 1078, 990, 1050, 971, 1037, 1089, 1109, 1124, 1099, 1023, 1132, 1003, 1066, 1145, 1016, 1076, 1048, 1043, 1076, 1133, 1165, 1034, 1060, 1077, 1054, 999, 1118, 1085, 1027, 1057, 1090, 1033, 1134, 981, 1065, 971, 1078, 1113, 913, 950, 1024, 956, 1055, 919, 966, 838, 934, 956, 990, 829, 861, 874, 876, 748, 801, 848, 706, 680, 779, 701, 731, 802, 730, 592, 711, 645, 594},
    (int[]) {951, 1004, 879, 878, 874, 971, 930, 1048, 1011, 1004, 968, 1020, 944, 1013, 979, 998, 1085, 1031, 975, 1024, 1018, 1017, 1116, 1017, 1095, 1028, 1094, 1118, 1090, 1105, 1113, 1033, 1149, 1086, 1135, 964, 962, 1063, 991, 914, 903, 901, 935, 937, 897, 888, 853, 976, 921, 949, 909, 903, 855, 892, 785, 808, 749, 813, 871, 791, 865, 788, 781, 764, 803, 694, 611, 734, 589, 682, 538},
    (int[]) {911, 947, 947, 938, 928, 921, 917, 879, 961, 978, 948, 1009, 1087, 1110, 1024, 1107, 975, 989, 1085, 1094, 977, 1000, 1101, 954, 975, 987, 1062, 1020, 1044, 1005, 999, 989, 937, 926, 1106, 933, 987, 932, 910, 924, 919, 916, 900, 883, 937, 951, 824, 952, 836, 892, 957, 932, 935, 806, 804, 815, 747, 737, 813, 662, 742, 673, 689, 710, 692, 768, 667, 737, 629, 676, 588},
    (int[]) {967, 874, 984, 892, 821, 1020, 1010, 945, 935, 923, 990, 967, 1055, 890, 894, 1042, 938, 1037, 972, 927, 947, 918, 978, 939, 1099, 1012, 955, 1077, 1000, 1085, 1027, 938, 915, 898, 995, 911, 1071, 876, 975, 980, 893, 970, 983, 858, 904, 1003, 987, 913, 947, 919, 869, 836, 875, 723, 760, 791, 692, 804, 695, 697, 642, 741, 606, 696, 606, 711, 747, 535, 534, 605, 670},
};

int N = 59;
int M = 71;
int D = 20;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}